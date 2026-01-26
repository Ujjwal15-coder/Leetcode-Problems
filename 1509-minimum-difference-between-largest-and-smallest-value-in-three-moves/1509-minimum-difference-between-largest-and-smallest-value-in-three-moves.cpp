class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(n <= 4) return 0;

        int minValue = INT_MAX;

        minValue = min(minValue,nums[n-4] - nums[0]); //removing 3 largest  always go from right side
        minValue = min(minValue,nums[n-1] - nums[3]); //removing 3 smallest always go from left side
        minValue = min(minValue,nums[n-2] - nums[2]); //removing 2 smallest from left and 1 largest from right side
        minValue = min(minValue,nums[n-3] - nums[1]);  //removing 2 largest from right and 1 smallest from left side

        return minValue;

        
        
    }
};