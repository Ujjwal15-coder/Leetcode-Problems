class Solution {
public:
    bool solveMem(int index,vector<int>& nums,int n,int target,vector<vector<int>> &dp){
        if(index >= n)
         return 0;

        if(target < 0)
            return 0;
        if(target == 0)
            return 1;

        if(dp[index][target] != -1)
            return dp[index][target];

       int incl = solveMem(index + 1,nums,n,target - nums[index],dp);
       int excl = solveMem(index + 1,nums,n,target - 0,dp);

       return dp[index][target] = incl or excl; //OR of true false

    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int total = 0;
        for(int i = 0; i < n;i++){
            total += nums[i];
        }

        if(total & 1) //for checking total is even
            return 0;
        
        int target = total/2;

        vector<vector<int>> dp(n,vector<int> (target+1,-1));

        return solveMem(0,nums,n,target,dp);
        
    }
};