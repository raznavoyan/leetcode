class Solution {
public:
    int firstUniqChar(string s) {

        for(int i = 0; i < s.size(); ++i){
            if(s[i] == '0'){
                continue;
            }
            bool triger = false;
            for(int j = i + 1; j < s.size(); ++j){
                if(s[i] == s[j]){
                    s[j] = '0';
                    triger = true;
                }
            }
            //if(triger){
            //    s[i] = '0';
            //}else{
            if(!triger){
                return i;
            }
        }
        return -1;
    }
};
