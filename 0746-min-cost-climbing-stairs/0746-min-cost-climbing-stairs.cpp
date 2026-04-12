class Solution {
public:
    int solveMem(int i,vector<int> &cost,vector<int> &dp){
        if(i == 0) return cost[0];
        if(i == 1) return cost[1];

        if(dp[i] != -1)
            return dp[i];
        
            int incl = solveMem(i-1, cost, dp);
            int excl = solveMem(i-2, cost, dp);

            return dp[i] = cost[i] + min(incl,excl);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n,-1);
        return  min(
            solveMem(n-1, cost, dp),
            solveMem(n-2, cost, dp));
        
    }
};