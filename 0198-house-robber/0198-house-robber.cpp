class Solution {
public:
    int solveRec(int i,vector<int> &nums,vector<int> &dp){
        int n = nums.size();
        if(i >= n)
            return 0;
        if(dp[i] != -1)
            return dp[i];

        int incl = nums[i] + solveRec(i+2,nums,dp);
        int excl = solveRec(i+1,nums,dp);

        int maxMoney = max(incl,excl);

        return dp[i] = maxMoney;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1,-1);
        int ans = solveRec(0,nums,dp);
        return ans;
        
    }
};