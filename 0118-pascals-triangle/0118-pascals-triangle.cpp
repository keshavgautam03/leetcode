class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> triangle;

    if (numRows <= 0) {
        return triangle;
    }
    triangle.push_back({1});


    for (int i = 1; i < numRows; ++i) {
        vector<int> prev_row = triangle[i - 1];
        vector<int> new_row;
        new_row.push_back(1);

        for (int j = 1; j < i; ++j) {
            new_row.push_back(prev_row[j - 1] + prev_row[j]);
        }

        new_row.push_back(1);
        triangle.push_back(new_row);
    }

    return triangle;
    }
};