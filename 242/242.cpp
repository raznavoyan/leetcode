class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        }
        for(int i = 0; i < s.size(); ++i) {
            bool found = false; // We don't need tmp flag, using found
            for(int j = 0; j < t.size(); ++j) {
                if(t[j] == s[i]) {
                    t.erase(j, 1);
                    found = true;
                    break;
                }
            }
            if(!found) { // If the character in s is not found in t, return false immediately
                return false;
            }
        }
        return true;
    }
};
