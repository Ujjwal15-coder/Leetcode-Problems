class Solution {
public:
    int solveMem(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& dp){
        if(i == 0 && j == 0)
            return grid[0][0];
        if(i < 0 || j < 0)
            return 1e9;

        if(dp[i][j] != -1)
            return dp[i][j];
        
        int up = grid[i][j] + solveMem(i-1,j,grid,dp);
        int left = grid[i][j] + solveMem(i,j-1,grid,dp);

        dp[i][j] = min(up,left);

        return dp[i][j];

    }
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n,vector<int> (m,-1));
        return solveMem(n-1,m-1,grid,dp);
        
    }
};