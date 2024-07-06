class Solution {
public:
    int maxDepth(string s) {
        int max = 0;
        int tmp = 0;
        int i = 0;
        while(s[i]){
            if(s[i] == '('){
                ++tmp;
                max = max > tmp ? max : tmp;
                
            }else if(s[i] == ')'){
                --tmp;
            }
            ++i;
        }

        return max;
    }
};
