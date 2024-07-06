class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int m) {
        vector<string> ans;
        int n = words.size();
        int i = 0;

        while (i < n) {
            int j = i, lineLen = 0;
            
            // Determine how many words can fit into the line.
            while (j < n && lineLen + words[j].length() + (j - i) <= m) {
                lineLen += words[j].length();
                j++;
            }

            string line;
            int spaces = m - lineLen; // Total spaces to distribute
            
            // If it's the last line or contains only one word
            if (j == n || j == i + 1) {
                for (int k = i; k < j; ++k) {
                    line += words[k];
                    if (k != j - 1) line += " ";
                }
                line += string(m - line.length(), ' ');
            } else {
                int spacesBetweenWords = spaces / (j - i - 1);
                int extraSpaces = spaces % (j - i - 1);
                
                for (int k = i; k < j; ++k) {
                    line += words[k];
                    if (k != j - 1) {
                        line += string(spacesBetweenWords + (k - i < extraSpaces ? 1 : 0), ' ');
                    }
                }
            }
            ans.push_back(line);
            i = j; // Move to the next set of words
        }
        return ans;
    }
};
