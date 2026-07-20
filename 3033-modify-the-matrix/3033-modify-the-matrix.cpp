class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        for(int j = 0; j < m;j++){
            int maxi = INT_MIN;
            for(int i = 0; i < n; i++){
                maxi = max(maxi,matrix[i][j]);

            }

            for(int i = 0; i < n; i++){
                if(matrix[i][j] == -1) 
                    matrix[i][j] = maxi;
            }
        }

        return matrix;
    }
};