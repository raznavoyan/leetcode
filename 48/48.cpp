class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        size_t size = matrix.size() - 1;
        for(int i = 0; i < (size + 1) / 2; ++i){
            for(int j = i; j < size - i; ++j){
                std::cout  << j << std::endl;
                int tmp = matrix[i][j];
                matrix[i][j] = matrix[size - j][i];
                matrix[size - j][i] = matrix[size - i][size - j];
                matrix[size - i][size - j] = matrix[j][size - i];
                matrix[j][size - i] = tmp;
            }
        }
    }
};
