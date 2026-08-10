class Solution {
public:
    bool solveRec(int n,vector<int> &dp){

        if(n == 0)
            return false;
    
        if(dp[n] != -1){
            return dp[n];
        }
        for(int k = 1; k * k <= n;k++){

            if(solveRec(n - (k*k),dp) == false){
                return dp[n] = true;
                }
        }
        return dp[n] = false;
    }
    bool winnerSquareGame(int n) {
        vector<int> dp(n+1,-1);
        return solveRec(n,dp) == true;
        
    }
};