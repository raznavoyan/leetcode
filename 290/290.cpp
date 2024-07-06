
class Solution {
public:
    bool wordPattern(string p, string s) {
        vector<string> r;
        stringstream ss(s);
        string word;

        while (ss >> word) {
            r.push_back(word);
        }
        
        if (p.length() != r.size()) {
            return false;
        }

        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;

        for (int i = 0; i < p.size(); ++i) {
            char c = p[i];
            string word = r[i];

            if (charToWord.count(c) && charToWord[c] != word) {
                return false;
            }

            if (wordToChar.count(word) && wordToChar[word] != c) {
                return false;
            }

            charToWord[c] = word;
            wordToChar[word] = c;
        }

        return true;
    }
};
