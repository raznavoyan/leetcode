class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std::string tmp = ;
        int ower = 0;
        while((strs[0][ower])){
            tmp += strs[0][ower];
            for(int i = 1; i <  strs.size(); ++i){
                if(tmp[ower] != strs[i][ower] || !(strs[i][ower])){
                    tmp.pop_back();
                    return tmp;
                }
            }
            ++ower;
        } 
        return tmp;
    }
};
