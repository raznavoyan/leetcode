class Solution {
public:
    int minOperations(vector<string>& logs) {
        int st = 0;

        for (const string& log : logs) {
            if (log == "../") {
                --st;
                if(st < 0){st = 0;}
            } else if (log != "./") {
                ++st;
            }
        }

        return st;
    }
};
