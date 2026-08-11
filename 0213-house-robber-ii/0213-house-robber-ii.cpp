class Solution {
public:
    int solveMem(int i,int end,vector<int> &nums,vector<int> &dp){
        int n = nums.size();
        if(n == 1)
            return nums[0];
        if(i > end)
            return 0;
        if(dp[i] != -1)
            return dp[i];
        int incl = nums[i] + solveMem(i+2,end,nums,dp); 
        int excl = solveMem(i+1,end,nums,dp);

        int maxMoney = max(incl,excl);
        return dp[i] = maxMoney;

    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp1(n+1,-1);
        vector<int> dp2(n+1,-1);

        int ans = solveMem(1,n - 1,nums,dp1);
        int ans2 = solveMem(0,n - 2,nums,dp2);

        int maxAns = max(ans,ans2);
        return maxAns;
    }
};