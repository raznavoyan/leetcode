
class Solution {
public:
    // Helper function to parse the formula within parentheses and apply the multiplier
    void open(string &s, int &i, unordered_map<string, int> &elementCount) {
        int start = i;
        i++;
        int size = s.length();
        unordered_map<string, int> tempCount;
        
        while (i < size) {
            char cur = s[i];
            if (cur == '(') {
                open(s, i, tempCount);
            } else if (cur == ')') {
                i++;
                int count = 0;
                while (i < size && isdigit(s[i])) {
                    count = count * 10 + s[i] - '0';
                    i++;
                }
                if (count == 0) count = 1; // Default multiplier is 1
                
                for (auto &pair : tempCount) {
                    elementCount[pair.first] += pair.second * count;
                }
                return;
            } else {
                string element = parseElement(s, i);
                int count = parseCount(s, i);
                tempCount[element] += count;
            }
        }
    }

    // Helper function to parse an element (e.g., "H", "O", "Mg")
    string parseElement(const string &s, int &i) {
        string element;
        element += s[i++];
        if (i < s.length() && islower(s[i])) {
            element += s[i++];
        }
        return element;
    }

    // Helper function to parse the count following an element
    int parseCount(const string &s, int &i) {
        int count = 0;
        while (i < s.length() && isdigit(s[i])) {
            count = count * 10 + s[i] - '0';
            i++;
        }
        return count == 0 ? 1 : count;
    }

    // Main function to parse the formula and count the atoms
    string countOfAtoms(string formula) {
        unordered_map<string, int> elementCount;
        int i = 0;
        int size = formula.length();

        while (i < size) {
            if (formula[i] == '(') {
                open(formula, i, elementCount);
            } else {
                string element = parseElement(formula, i);
                int count = parseCount(formula, i);
                elementCount[element] += count;
            }
        }

        vector<pair<string, int>> elements(elementCount.begin(), elementCount.end());
        sort(elements.begin(), elements.end());

        string result;
        for (const auto &pair : elements) {
            result += pair.first;
            if (pair.second > 1) {
                result += to_string(pair.second);
            }
        }

        return result;
    }
};
