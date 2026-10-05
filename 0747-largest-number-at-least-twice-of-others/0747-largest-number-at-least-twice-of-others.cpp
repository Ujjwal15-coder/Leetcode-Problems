class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp = nums;

        sort(temp.begin(),temp.end());

        int largest = temp[nums.size() - 1];
        int secondLargest = temp[nums.size() - 2];

        if(largest >= 2 * secondLargest)
        {
            for(int i = 0;i < n; i++){
                if(nums[i] == largest) 
                    return i;
                }
        }
        return -1;
    }
};