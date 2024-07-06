class Solution {
public:
    bool backspaceCompare(string s, string t) {
        std::string ss;
        
        for(int i = 0; s[i]; ++i){
            if(s[i] != '#'){
                ss += s[i];
                continue;
            }
            if(!ss.empty())
            ss.pop_back();
        }
    
        
        std::string tt;
        
        for(int i = 0; t[i]; ++i){
            if(t[i] != '#'){
                tt += t[i];
                continue;
            }
            if(!tt.empty())
            tt.pop_back();
        }
    
        
        return ss == tt;
    }
};
