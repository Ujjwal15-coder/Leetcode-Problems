class Solution {
public:
    int mod = 1e9 + 7;
    int solveMem(int n,vector<int> &dp){
        int result = 0;
        if(n == 0) return 1;
        if(n == 1) return 2;

        if(dp[n] != -1)
            return dp[n];

        int inclusive = solveMem(n-2,dp);
        int exclusive = solveMem(n-1,dp);

        result = (inclusive + exclusive) % mod;

        return dp[n] = result;

    }
    int countHousePlacements(int n) {
        vector<int> dp(n+1,-1);
        long long result =  solveMem(n,dp);
        return (1ll * result * result) % mod;
        
    }
};