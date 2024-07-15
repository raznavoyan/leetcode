class Solution {
public:
    string reverseWords(string& s) {
        std::istringstream iss(s);
        std::vector<std::string> words;
        std::string word;

        // Extract words and store in the vector
        while (iss >> word) {
            words.push_back(word);
        }
        // Concatenate words into a single string with a single space
        std::string result;
        for (size_t i = words.size() - 1; i > 0; --i) {
            result += words[i];
            result += " ";
        }
        result += words[0];

        return result;
    }
};
