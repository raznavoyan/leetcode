class Solution {
public:
    int countF(vector<vector<int>>& arr, int i, int j) {
        arr[i][j] = 0; 
        int count = 4;
        // /\ //
        if ((i < arr.size() - 1) && arr[i + 1][j]) {
            count -= 2;
        }
        // \/ //
        if ((i > 0) && arr[i - 1][j]) {
            count -= 2;
        }
        // -> //
        if ((j < arr[i].size() - 1) && arr[i][j + 1]) {
            count -= 2;
        }
        // <- //
        if ((j > 0) && arr[i][j - 1]) {
            count -= 2;
        }

        return count;
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        int count = 0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[i].size(); ++j) {
                if (grid[i][j] != 0) {
                    count += countF(grid, i, j);
                }
            }
        }
        return count;
    }
};
