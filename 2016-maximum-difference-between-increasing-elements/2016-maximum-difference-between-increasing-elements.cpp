class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int result = -1;
        int min_Val = nums[0];
        for(int i = 1;i < nums.size();i++){
            if(nums[i] > min_Val)
                result = max(result,nums[i] - min_Val);
            else
                min_Val = nums[i];
        }
        return result;
    }
};