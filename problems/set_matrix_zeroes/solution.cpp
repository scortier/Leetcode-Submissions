class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        set<int> rows, cols;
        for (auto i = 0; i < matrix.size(); ++i)        // row
            for (auto j = 0; j < matrix[0].size(); ++j) // col
                if (matrix[i][j] == 0)
                {
                    rows.insert(i);
                    cols.insert(j);
                }

        for (auto row : rows) // fill rows to zero
            std::fill(matrix[row].begin(), matrix[row].end(), 0);

        for (auto col : cols) // fill cols to zero
            for (auto row = 0; row < matrix.size(); ++row)
                std::fill(matrix[row].begin() + col, matrix[row].begin() + col + 1, 0);
    }
};