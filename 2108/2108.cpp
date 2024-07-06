class Solution {
public:
    string firstPalindrome(vector<string>& words){
        int i = 0;
        for(; i < words.size();++i){
            bool flag = true;
            for(int j = 0; j < words[i].size(); ++j){
                if(words[i][j] != words[i][words[i].size() - j - 1]){
                    flag = false;
                    break;
                }
            }
            if(flag){return words[i];}
        }
        return "";
    }
};
