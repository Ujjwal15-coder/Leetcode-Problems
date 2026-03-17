class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        int ans = 0;

        for(int i = 0; i < m; i++) {

            // Step 1: build heights
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] == 1 && i > 0) {
                    matrix[i][j] += matrix[i-1][j];
                }
            }

            // Step 2: copy row
            vector<int> currRow = matrix[i];

            // Step 3: sort descending
            sort(currRow.begin(), currRow.end(), greater<int>());

            // Step 4: calculate area
            for(int j = 0; j < n; j++) {
                int area = currRow[j] * (j + 1);
                ans = max(ans, area);
            }
        }

        return ans;
    }
};