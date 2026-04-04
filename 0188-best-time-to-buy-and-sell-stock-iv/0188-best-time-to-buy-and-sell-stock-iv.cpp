class Solution {
public:
    int solveMem(int index,int buy,vector<int>& prices,int k,vector<vector<vector<int>>> &dp){
        if(index == prices.size())
            return 0;
        
        if(k == 0)
            return 0;

        if(dp[index][buy][k] != -1)
            return dp[index][buy][k];

        int profit = 0;
        if(buy){
            int buyKaro = -prices[index] + solveMem(index + 1,0,prices,k,dp);
            int skipKaro = 0 + solveMem(index + 1,1,prices,k,dp);
            profit = max(buyKaro,skipKaro);

        }
        else{
            int sellKaro = prices[index] + solveMem(index + 1,1,prices,k - 1,dp);
            int skipKaro = 0 + solveMem(index + 1,0,prices,k,dp);
            profit = max(sellKaro,skipKaro);
        }
        return dp[index][buy][k] = profit;
    }
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int> > > dp(n,vector<vector<int>> (2,vector<int>(k+1,-1)));
        return solveMem(0,1,prices,k,dp);
        
    }
};