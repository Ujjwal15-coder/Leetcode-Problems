class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0,high = n -1;

        while(low <= high){
            int mid = (low + high)/2;
            if(nums[high] == nums[mid]){
                high = high - 1;
            }
            else if(nums[high] > nums[mid]){
                high = mid;
            }
            else{
                low = mid + 1;
            }
        }
        return nums[low];
    }
};