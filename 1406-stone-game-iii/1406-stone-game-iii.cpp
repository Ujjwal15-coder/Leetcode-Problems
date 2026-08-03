class Solution {
public:
    int solveMem(int i,vector<int> &stoneValue,vector<int> &dp){
        int n = stoneValue.size();
        int result = INT_MIN;
        if(i >= n)
            return 0;

        if(dp[i] != -1){
            return dp[i];
        }
        result = max(result,stoneValue[i] - solveMem(i+1,stoneValue,dp));
        if(i+1 < n){
        result = max(result,stoneValue[i] + stoneValue[i+1] - solveMem(i+2,stoneValue,dp));
        }
        if(i + 2 < n){
        result = max(result,stoneValue[i] + stoneValue[i+1] + stoneValue[i+2]- solveMem(i+3,stoneValue,dp));
        }


        return dp[i]= result;
    }
    string stoneGameIII(vector<int>& stoneValue) {
        int n = stoneValue.size();
        vector<int> dp(n,-1);

        int diff = solveMem(0,stoneValue,dp);
        if(diff == 0)
            return "Tie";

        return diff > 0 ? "Alice":"Bob";
        
    }
};