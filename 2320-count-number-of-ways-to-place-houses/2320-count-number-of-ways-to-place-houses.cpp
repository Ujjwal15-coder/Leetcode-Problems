class Solution {
public:
   int mod = 1e9 + 7;
    int solveMem(int n,vector<int> &dp){
        if(n == 0)
            return 1;
        if(n == 1)
            return 2;
        if(dp[n] != -1)
            return dp[n];
            int result = 0;
        int incl = solveMem(n - 2,dp);
        int excl = solveMem(n - 1,dp);

        result = (incl + excl)%mod;

        return dp[n] = result;
    }
    int countHousePlacements(int n) {
        vector<int> dp(n+1,-1);
         int result = solveMem(n,dp);

         return (1LL * result * result)%mod;
        
    }
};