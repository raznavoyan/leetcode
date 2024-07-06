class Solution {
public:
    string makeGood(string s) {
        char c = s[0];
        char dif = 32;
        for(int i = 1; i < s.size(); ++i){  
            if((s[i] ^ c) == 32){         
                s.erase(i - 1, 2);
                i = (i - 2) * (i > 1);
            }
            c = s[i];
        }

        return s;
    }
};
