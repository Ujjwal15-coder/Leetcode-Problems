class Solution {
public:
    int solveRec(int i,int j,vector<int> &nums){
        if(i > j)
            return true;
        if(i == j)
            return nums[i];
        
        int take_i = nums[i] + min(solveRec(i+2,j,nums),solveRec(i+1,j-1,nums));
        int take_j = nums[j] + min(solveRec(i+1,j-1,nums),solveRec(i,j-2,nums));

        return max(take_i,take_j);
    }


    bool predictTheWinner(vector<int>& nums) {
        int total_Score = accumulate(nums.begin(),nums.end(),0);
        int n = nums.size();
        int player_1_Score =  solveRec(0,n-1,nums);
        int player_2_Score = total_Score - player_1_Score;

        return player_1_Score >= player_2_Score;
    }
};