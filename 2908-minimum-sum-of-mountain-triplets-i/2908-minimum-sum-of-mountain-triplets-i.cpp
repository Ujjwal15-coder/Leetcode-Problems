class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        vector<int> suffix(n);

        prefix[0] = nums[0];
        for(int i = 1; i < n;i++){
            prefix[i] = min(prefix[i-1],nums[i]);
        }

        suffix[n-1] = nums[n-1];
        for(int i = n - 2; i >= 0;i--){
            suffix[i] = min(suffix[i+1],nums[i]);
        }
        int ans = INT_MAX;
        for(int j = 1; j < n-1;j++){

            if(prefix[j-1] < nums[j] && nums[j] > suffix[j+1]){

                int sum = prefix[j-1] + nums[j] + suffix[j+1];

                ans = min(ans,sum);
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};