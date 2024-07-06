class Solution {
public:
vector<int> getRow(int rowIndex) {
    vector<int> row(rowIndex + 1, 0);
    row[0] = 1; // First element is always 1

    for (int i = 1; i <= rowIndex; ++i) {
        // Calculate each element of the current row based on the previous row
        for (int j = i; j > 0; --j) {
            row[j] += row[j - 1];
        }
    }

    return row;
}
};
