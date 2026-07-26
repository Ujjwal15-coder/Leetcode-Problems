class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int maxi = INT_MIN;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        
        int smallest = nums[0];
        int secondSmallest = nums[1];
        int num1 = nums[n - 1];
        int num2 = nums[n - 2];
        int num3 = nums[n - 3];

        maxi = max(smallest * secondSmallest * num1, num1 * num2 * num3);

        return maxi;
    }
};