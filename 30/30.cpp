class Solution {
    struct WC {
        size_t cur = 0;
        size_t count = 0;
    };
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        size_t len = words[0].size();

        unordered_map<string_view, WC> word_count;
        word_count.reserve(words.size());
        for(auto& s : words) word_count[s].count+=1;
        deque<size_t*> window;
        vector<int> ans;
        for(size_t start = 0; start < len; ++start) {
            size_t wc = 0;
            size_t i = start;
            for(; i + len <= s.size(); i += len) {
                auto it = word_count.find(string_view(&s[i], &s[i+len]));
                if (it == word_count.end()) {
                    for(size_t* count : window) {
                        *count = 0;
                    }
                    window.clear();
                    wc = 0;
                } else {
                    if (it->second.cur == it->second.count) {
                        for(size_t* count : window) {
                            window.pop_front();
                            --wc;
                            if (count == &it->second.cur) break;
                            *count -= 1;
                        }
                    } else {
                        it->second.cur+=1;
                    }
                    window.push_back(&it->second.cur);
                    ++wc;
                    if (wc == words.size()) {
                        ans.push_back(i - len * (words.size() - 1));
                    }
                }
            }
            for(size_t* count : window) {
                *count = 0;
            }
            window.clear();
        }
        return ans;
    }

    
};

/*
class Solution {
private:
    std::unordered_map<std::string, int> map;

    bool check(std::string& s, int i, std::vector<int> v, const int ws, const int vsize) {
        int j = 0;
        while (j < vsize) {
            std::string st = s.substr(i + j * ws, ws);
            auto it = map.find(st);
            if (it != map.end() && v[it->second]) {
                --v[it->second];
                ++j;
            } else {
                return false;
            }
        }
        return true;
    }

public:
    std::vector<int> findSubstring(std::string s, std::vector<std::string>& words) {
        int size = words.size();
        const int ws = words[0].size();
        std::vector<int> ch;
        for (int i = 0; i < size; ++i) {
            if(map.find(words[i]) != map.end()){
                ++ch[map[words[i]]];
            }else{
                ch.push_back(1);
                map[words[i]] = ch.size() - 1;
            }
        }
        std::vector<int> res;
        int i = 0;
        int limit = s.size() - size * ws + 1;
        while (i < limit) {
            if (map.find(s.substr(i, ws)) != map.end()) {
                if (check(s, i, ch, ws, size)) {
                    res.push_back(i);
                }
            }
            ++i;
        }

        return res;
    }
};
*/
