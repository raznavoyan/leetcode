class Solution {
public:
    bool canConstruct(string r, string m) {
        int tmp['z' - 'a' + 1] = {};
        int* map = (int*)((unsigned long int)tmp - 4 * ((int)('a')));
        for (auto it : m) {
            ++map[it];
        }
        for (auto it : r) {
            if (map[it] == 0) {
                return false;
            }
            --map[it];
        }

        return true;
    }
};
