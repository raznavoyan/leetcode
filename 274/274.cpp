class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        vector<int> paperCount(n + 1, 0);
        
        for (int citation : citations) {
            if (citation >= n) {
                paperCount[n]++;
            } else {
                paperCount[citation]++;
            }
        }
        
        int hIndex = 0;
        for (int h = n; h >= 0; h--) {
            hIndex += paperCount[h];
            if (hIndex >= h) {
                return h;
            }
        }
        
        return 0;
    }
};
