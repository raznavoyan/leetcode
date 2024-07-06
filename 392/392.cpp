class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.empty()){return true;}
        int cur = 0;
        for(int i = 0; i < t.size(); ++i){
            if(t[i] == s[cur]){
                if(++cur == s.size()){
                    return true;
                }
            }
        }
        return false;
    }
};
