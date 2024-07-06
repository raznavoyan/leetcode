class Solution {
public:
    static bool compare(const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second != b.second) {
            return a.second < b.second;
        }
        
        return a.first > b.first;
    }

    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        vector<pair<int, int>> sortedByFreq(freq.begin(), freq.end());
        sort(sortedByFreq.begin(), sortedByFreq.end(), compare);
        
        vector<int> result;
        for (auto& p : sortedByFreq) {
            for (int i = 0; i < p.second; i++) {
                result.push_back(p.first);
            }
        }
        return result;
    }
};
