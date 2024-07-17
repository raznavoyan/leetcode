class Solution {
public:
    int lengthOfLongestSubstring(std::string st) {
        bool map[129] = {0};
        int i = 0;
        int j = 0;
        int s = st.size();
        int res = 0;
        
        while (i < s) {
            if (map[st[i]]) {
                map[st[j]] = false;
                ++j;
            } else {
                map[st[i]] = true;
                res = std::max(res, i - j + 1);
                ++i;
            }
        }

        return res;
    }
};
