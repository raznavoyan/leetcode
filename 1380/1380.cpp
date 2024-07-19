class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& m) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for(int i = 0;i < m.size();i++){
            int mn = INT_MAX;
            for(int j = 0;j < m[0].size();j++){
                mn = min(mn, m[i][j]);
            }
            mp[mn]++;
        }
        for(int i = 0;i < m[0].size();i++){
            int mx = 0;
            for(int j = 0;j < m.size();j++){
                mx = max(mx, m[j][i]);
            }
            if(mp.count(mx))ans.push_back(mx);
        }

        return ans;
    }
};

auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();

// class Solution {
// public:
//     vector<int> luckyNumbers(vector<vector<int>>& matrix) {
//         int N = matrix.size(), M = matrix[0].size();

//         vector<int> rowMin;
//         for (int i = 0; i < N; i++) {

//             int rMin = INT_MAX;
//             for (int j = 0; j < M; j++) {
//                 rMin = min(rMin, matrix[i][j]);
//             }
//             rowMin.push_back(rMin);
//         }

//         vector<int> colMax;
//         for (int i = 0; i < M; i++) {

//             int cMax = INT_MIN;
//             for (int j = 0; j < N; j++) {
//                 cMax = max(cMax, matrix[j][i]);
//             }
//             colMax.push_back(cMax);
//         }

//         vector<int> luckyNumbers;
//         for (int i = 0; i < N; i++) {
//             for (int j = 0; j < M; j++) {
//                 if (matrix[i][j] == rowMin[i] && matrix[i][j] == colMax[j]) {
//                     luckyNumbers.push_back(matrix[i][j]);
//                 }
//             }
//         }

//         return luckyNumbers;
//     }
// };
