class Solution {
public:
    int solveMem(int i,int j,vector<int> & nums,vector<vector<int>> &dp){
        if(i > j)
            return 0;
        if(i == j)
            return nums[i];

        if(dp[i][j] != -1){
            return dp[i][j];
        }
        
        int take_i = nums[i] + min(solveMem(i+2,j,nums,dp),solveMem(i+1,j-1,nums,dp));
        int take_j = nums[j] + min(solveMem(i+1,j-1,nums,dp),solveMem(i,j-2,nums,dp));

        return dp[i][j] = max(take_i,take_j);
    }


    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        int total_Score = accumulate(nums.begin(),nums.end(),0);

        vector<vector<int>> dp(n, vector<int>(n, -1));

        int player_1_Score =  solveMem(0,n-1,nums,dp);
        int player_2_Score = total_Score - player_1_Score;

        return player_1_Score >= player_2_Score;
    }
};