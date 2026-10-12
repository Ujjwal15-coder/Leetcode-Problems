class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        int sum = 0;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < n;i++){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            int j = i + 1;
            int k = n - 1;

            while(j < k){
                sum = nums[i] + nums[j] + nums[k];
                if(sum == 0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                if(sum < 0){
                    j++;
                }
                if(sum > 0){
                    k--;
                }
            }
            if(j < k && nums[j] == nums[j-1]) continue;
            if(j < k && nums[k] == nums[k+1]) continue;

        }
        return ans;
    }
};