class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<long long> rowSum(m,0);
        vector<long long> colSum(n,0);
        
        long long totalSum = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0;j < n; j++){
                totalSum += grid[i][j];
                rowSum[i] += grid[i][j];
                colSum[j] += grid[i][j];
            };
        }
        if(totalSum % 2 != 0){
            return false;
        }
        //Horizantal split
        long long upper = 0;
        for(int i = 0; i < m - 1; i++){
            upper += rowSum[i];

            if(upper == totalSum - upper){
                return true;
            }

        }

        //Vertital split
        long long left = 0;
        for(int j = 0; j < n - 1; j++){
            left += colSum[j];

            if(left == totalSum - left){
                return true;
            }

        }
        return false;
    }
};