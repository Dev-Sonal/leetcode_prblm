class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;

        if (matrix.empty() || matrix[0].empty()) {
            return result;
        }

        int m = matrix.size();
        int n = matrix[0].size();
        int row_start = 0, row_end = m - 1, col_start = 0, col_end = n - 1;

        while (row_start <= row_end && col_start <= col_end) {
            // Traverse right
            for (int i = col_start; i <= col_end; i++) {
                result.push_back(matrix[row_start][i]);
            }
            row_start++;

            // Traverse down
            for (int j = row_start; j <= row_end; j++) {
                result.push_back(matrix[j][col_end]);
            }
            col_end--;

            // Traverse left (if there are remaining rows)
            if (row_start <= row_end) {
                for (int i = col_end; i >= col_start; i--) {
                    result.push_back(matrix[row_end][i]);
                }
                row_end--;
            }

            // Traverse up (if there are remaining columns)
            if (col_start <= col_end) {
                for (int j = row_end; j >= row_start; j--) {
                    result.push_back(matrix[j][col_start]);
                }
                col_start++;
            }
        }

        return result;
    }
};
