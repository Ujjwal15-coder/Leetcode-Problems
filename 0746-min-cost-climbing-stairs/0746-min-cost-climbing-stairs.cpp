class Solution {
public:
    int solveMem(int i,vector<int> cost,vector<int>& dp){
        int n = cost.size();
        if(i >= n) return 0;

        if(dp[i] != -1)
            return dp[i];

        dp[i] = cost[i] + min(solveMem(i+1,cost,dp),solveMem(i+2,cost,dp));
        return dp[i];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n,-1);
        return min(solveMem(0,cost,dp),solveMem(1,cost,dp));
        
    }
};