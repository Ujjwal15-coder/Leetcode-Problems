class Solution {
public:
    int solveMem(int index,int buy,vector<int>& prices,int fee,vector<vector<int>>& dp){
        if(index == prices.size())
            return 0;

        if(dp[index][buy] != -1)
            return dp[index][buy];

        int profit = 0;
        if(buy){
            int buyKaro = -prices[index] + solveMem(index + 1,0,prices,fee,dp) - fee;
            int skipKaro = 0 + solveMem(index + 1,1,prices,fee,dp);
            profit = max(buyKaro,skipKaro);

        }
        else{
            int sellKaro = prices[index] + solveMem(index + 1,1,prices,fee,dp);
            int skipKaro = 0 + solveMem(index + 1,0,prices,fee,dp);
            profit = max(sellKaro,skipKaro);
        }
        return dp[index][buy] = profit;
    }

    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return solveMem(0,1,prices,fee,dp);
        
    }
};