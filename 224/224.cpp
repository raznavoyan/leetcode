class Solution {
public:
    int calculate(string s) {
        std::stack<int> nums;
        std::stack<char> ops; 
        int num = 0;
        int rst = 0;
        int sign = 1;
        const int size = s.size();
        for (int i = 0; i < size; ++i) {
            char c = s[i];
            if (c >= '0' && c <='9') {
                num = num * 10 + (c - '0');
            } else {
                rst += sign * num;
                num = 0;
                if (c == '+') sign = 1;
                if (c == '-') sign = -1;
                if (c == '(') {
                    nums.push(rst);
                    ops.push(sign);
                    rst = 0;
                    sign = 1;
                }
                if (c == ')' && ops.size()) {
                    rst = ops.top() * rst + nums.top();
                    ops.pop(); nums.pop();
                }
            }
        }
        rst += sign * num;
        return rst;
    }
};
