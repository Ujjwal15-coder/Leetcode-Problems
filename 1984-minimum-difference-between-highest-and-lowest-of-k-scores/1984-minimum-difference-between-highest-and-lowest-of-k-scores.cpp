class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int result = INT_MAX;
        int i = 0;
        while(i < n ){

            result = min(result,nums[i+k-1] - nums[i]);
            i++;
             if(i+k > n) break;
        }
        return result;

        
    }
};