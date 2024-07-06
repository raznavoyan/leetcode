class Solution {
public:
bool dfs(std::vector<std::vector<char>>& board, std::string& word, int index, int row, int col) {
    // Base case: if we've matched all characters in the word
    if (index == word.length()) {
        return true;
    }
    
    // Check if the current position is out of bounds or if the current cell's value doesn't match the next character in the word
    if (row < 0 || row >= board.size() || col < 0 || col >= board[0].size() || board[row][col] != word[index]) {
        return false;
    }
    
    // Temporarily mark the current cell as visited
    char temp = board[row][col];
    board[row][col] = '#';
    
    // Explore adjacent cells (up, down, left, right)
    bool found = dfs(board, word, index + 1, row - 1, col) ||  // up
                 dfs(board, word, index + 1, row + 1, col) ||  // down
                 dfs(board, word, index + 1, row, col - 1) ||  // left
                 dfs(board, word, index + 1, row, col + 1);    // right
    
    // Restore the cell's original value
    board[row][col] = temp;
    
    return found;
}

bool exist(std::vector<std::vector<char>>& board, std::string word) {
    int rows = board.size();
    int cols = board[0].size();
    
    // Iterate through each cell in the grid
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            // If the current cell contains the first character of the word, start DFS from this cell
            if (board[i][j] == word[0] && dfs(board, word, 0, i, j)) {
                return true;
            }
        }
    }
    
    // If no match found
    return false;
}

};
