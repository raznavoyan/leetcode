class Solution {
public:
    int maximumGain(string s, int x, int y) {
        if (s.length() < 2) {
            return 0;
        }
        int res = 0;
        std::string top;
        std::string bot;
        int top_score;
        int bot_score;

        if (y > x) {
            top = "ba";
            top_score = y;
            bot = "ab";
            bot_score = x;
        } else {
            top = "ab";
            top_score = x;
            bot = "ba";
            bot_score = y;
        }
        char t1 = top[0];
        char t2 = top[1];
        vector<char> stack;
        for (char ch : s) { // Changed 'char' to 'ch'
            if (ch == t2 && !stack.empty() && stack.back() == t1) {
                res += top_score;
                stack.pop_back();
            } else {
                stack.push_back(ch);
            }
        }
        t1 = bot[0];
        t2 = bot[1];
        vector<char> new_stack;
        for (char ch : stack) { // Changed 'char' to 'ch'
            if (ch == t2 && !new_stack.empty() && new_stack.back() == t1) {
                res += bot_score;
                new_stack.pop_back();
            } else {
                new_stack.push_back(ch);
            }
        }

        return res;
    }
};
