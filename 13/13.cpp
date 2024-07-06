class Solution {
public:
    int romanToInt(string s) {
    std::unordered_map<char, int> romanNumerals = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int result = 0;
    int prevValue = 0;

    for (int i = s.length() - 1; i >= 0; i--) {
        int curValue = romanNumerals[s[i]];
        if (curValue < prevValue) {
            result -= curValue;
        } else {
            result += curValue;
        }
        prevValue = curValue;
    }

    return result;

    }
};
