class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int mid = 0;
        int high = n - 1;

        while(mid < high){
            if(nums[mid] % 2 == 0){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
        return nums;
    }
};