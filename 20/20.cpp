class Solution {
public:
    bool isValid(std::string s) {
        std::map<char, char> map1;
        map1['('] = ')';
        map1['{'] = '}';
        map1['['] = ']';
               
        std::stack<char> stack1;
        stack1.push(map1[s[0]]);
        int i = 1;
        while (s[i]) {
            char tmp = s[i];
            if (map1.find(tmp) != map1.end()) {
                stack1.push(map1[tmp]);
            } else if (stack1.empty() || tmp != stack1.top()) {
                return false;
            } else {
                stack1.pop();
            }
            ++i;
        }
        return stack1.empty();
    }

};
