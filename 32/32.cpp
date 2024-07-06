class Solution {
public:
    int longestValidParentheses(std::string s) {
        std::stack<int> st;
        int maxcount = 0;
        st.push(-1);
        char b = '(';
        char p = ')';

        for(int i = 0; i < s.size(); ++i){
            if (s[i] == b){
                st.push(i);
            } else {
                st.pop();
                if(st.empty()) {
                    st.push(i);
                }
                else {
                    int len = i - st.top();
                    maxcount = std::max(len, maxcount);
                }
            }
            
        }
        
        return maxcount;
    }  

};
