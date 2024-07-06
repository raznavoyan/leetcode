class Solution {
public:
    int strStr(const std::string& a, const std::string& b) {
        if (b.empty() || a.size() < b.size()){
           return -1;
        }
        for (int i = 0; i <= a.size() - b.size(); ++i) {
            while(a[i] != b[0] && i < a.size() - b.size()){++i;}
            int j = 0;
            for (;j < b.size(); ++j) {
                if (a[i + j] != b[j]) {
                    break;
                }
            }
            if(j == b.size()){
                return i;
            }
        }
        return -1;
    }

};
