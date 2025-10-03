class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int minimum = INT_MAX;

        int low = 0, high = n - 1;

        while(low <= high){
            int mid = (low + high)/2;

            if(nums[low] <= nums[mid]){
                minimum = min(minimum,nums[low]);
                low = mid + 1;
            }

            else{
                minimum = min(minimum,nums[mid]);
                high = mid - 1;
            }
        }
        return minimum;
        
    }
};