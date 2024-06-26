class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> triangle;

    for (int i = 0; i < numRows; i++) {
        std::vector<int> row(i + 1, 1); // Initialize each row with 1s
        for (int j = 1; j < i; j++) {
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j]; // Calculate value based on the row above
        }
        triangle.push_back(row);
    }

    return triangle;
    }
};