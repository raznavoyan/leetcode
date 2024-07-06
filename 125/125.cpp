class Solution {
public:
    bool isPalindrome(string s) {
        for(int i = 0; i < s.size(); ++i){
            char c = s[i];
            if((c > '0' - 1 && c < '9' + 1 )||
               (c > 'a' - 1 && c < 'z' + 1)){
                   continue;
            }
            if(c >= 'A' && c <= 'Z'){
                s[i] += 'a' - 'A';
                continue;
            }
            s.erase(i, 1);
            --i;
        }
        if(s.empty()){
            return true;
        }
        std::cout << s<<std::endl;

        for(int i = 0; i < s.size()/2; ++i){
            if(s[i] != s[s.size() - i -1]){
                return  false;
            }
        }
        return true;
    }
};
