class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1){
            return s;
        }
        std::vector<string> m(numRows);
        int size = s.size();
        int sign = 1;
        int r = 0;
        for(int i = 0; i < size; ++i){
            m[r] += s[i];
            r += sign;
            if(r == 0 || r == numRows - 1){
                sign *= -1;
            }
        }
        string res;
        res.reserve(size);

        for(int i = 0; i < numRows; ++i){
            res += m[i];
        }
        
        return res;
    }
};
