class Solution {
public:
int findMaxForm(vector<string>& strs, int m, int n) {
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (const string& str : strs) {
        int count0 = count(str.begin(), str.end(), '0');
        int count1 = str.size() - count0;

        for (int i = m; i >= count0; --i) {
            for (int j = n; j >= count1; --j) {
                dp[i][j] = max(dp[i][j], dp[i - count0][j - count1] + 1);
            }
        }
    }

    return dp[m][n];
}
};
