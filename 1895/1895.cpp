class Solution {
public:
    string sortSentence(string s) {
        std::unordered_map<int, std::string> map;

        std::istringstream stream(s);
        std::string token;
        int count = 0;

        while (stream >> token) {
            int i = token.size() - 1;
            while (i >= 0 && std::isdigit(token[i])) {
                i--;
            }
            ++i;
            int index = stoi(token.substr(i));
            map[index] = token.substr(0, i);
            ++count;
        }

        token = map[1];
        for(int i = 2; i <= count; ++i){
            token += " " + map[i];
        }

        return token;
    }
};
