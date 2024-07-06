class Solution {
public:
    int finalValueAfterOperations(vector<string>& opr) {
        int out = 0;
        for(int i = 0; i < opr.size(); ++i){
            if(opr[i][0] == '-' || opr[i][2] == '-'){
                --out;
                continue;
            }
            ++out;
        }
        return out;
    }
};
