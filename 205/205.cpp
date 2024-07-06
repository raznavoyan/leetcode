class Solution {
public:
    bool isIsomorphic(std::string s, std::string t) {
        if (s.size() != t.size()) {
            return false;
        }

        char s_to_t[128] = {}; // Mapping from s to t
        char t_to_s[128] = {}; // Mapping from t to s

        for (int i = 0; i < s.size(); ++i) {
            int char_s = static_cast<int>(s[i]);
            // Check mapping from s to t
            if (s_to_t[char_s] == 0) {
                s_to_t[char_s] = t[i];
            } else if (s_to_t[char_s] != t[i]) {
                return false;
            }

            int char_t = static_cast<int>(t[i]);
            // Check mapping from t to s
            if (t_to_s[char_t] == 0) {
                t_to_s[char_t] = s[i];
            } else if (t_to_s[char_t] != s[i]) {
                return false;
            }
        }

        return true;
    }
};
