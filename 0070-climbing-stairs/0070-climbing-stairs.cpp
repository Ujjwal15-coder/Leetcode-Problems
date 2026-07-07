class Solution {
public:
    int solveMem(int i,int n,vector<int> &dp){
        if(i == n)
            return 1;
        if(i > n)
            return 0;
        if(dp[i] != -1)
            return dp[i];
        dp[i] = solveMem(i+1,n,dp) + solveMem(i + 2,n,dp);
        return dp[i];
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return solveMem(0,n,dp);
    }
};