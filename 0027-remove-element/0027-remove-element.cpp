class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int before = 0;
        for(int i = 0 ; i < n;i++){
            if(nums[i] != val){
                nums[before] = nums[i];
                before++;
            }
        }
        return before;
    }
};