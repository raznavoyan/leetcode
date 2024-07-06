class Solution {
public:
    int lengthOfLastWord(string s) {
            s.pop_back();
        }
        int tmp = 0;
            s.pop_back();
            ++tmp;
        }
        return tmp;
    }
};
