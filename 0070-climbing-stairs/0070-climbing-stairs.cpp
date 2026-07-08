class Solution {
public:
    int solveTab(int n){
        vector<int> dp(n+2);
        dp[n] = 0;
        dp[n+1] = 1;
        for(int i = n-1; i >= 0;i-- ){
            dp[i] = dp[i+1] + dp[i+2];
        }
        return dp[0] + dp[1];
    }
    int climbStairs(int n) {
        return solveTab(n);
    }
};