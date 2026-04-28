class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int minElement = INT_MAX;
        int count = 0;
        for(int i = 0; i < n; i++){
           minElement = min(minElement, nums[i]);
            count +=  abs(nums[i] - minElement);
        }
        return count;
    }
};