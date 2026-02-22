class Solution {
public:
    int solveTab(int n){
        vector<int> dp(n + 1,INT_MAX);
       dp[0] = 0;


        int ans = n;
        for(int j = 1; j <= n;j++){
        for(int i = 1;i*i <= n; i++){
            int temp = i * i;
            if(j - temp >= 0)
            dp[j] = min(dp[j], 1 + dp[j-temp]);
        }
        }
        return dp[n];
    }
    int numSquares(int n) {
      
        return solveTab(n);
    }
};