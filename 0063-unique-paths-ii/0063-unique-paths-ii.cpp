class Solution {
public:
    int solveMem(int i,int j,int m,int n,vector<vector<int>>& grid,vector<vector<int>> &dp){
        if(i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == 1) //grid[i][j] == 1 is an obstacle we skip this 
            return 0;

        if(i == m - 1 && j == n - 1)
            return 1;
        
        if(dp[i][j] != -1)
            return dp[i][j];

        int right = solveMem(i,j+1,m,n,grid,dp);
        int down = solveMem(i + 1,j,m,n,grid,dp);

        return dp[i][j] = right + down;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        vector<vector<int>> dp(m,vector<int>(n,-1));

        return solveMem(0,0,m,n,obstacleGrid,dp);
        
        
    }
};