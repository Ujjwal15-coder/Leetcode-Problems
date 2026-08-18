class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int n = nums.size();
        for(int x:nums){
            freq[x]++;
        }
        if(k == n)
            return *max_element(nums.begin(),nums.end());
        int ans = -1;
        if(k == 1){
        for(auto it:freq){
            if(it.second == 1){
                ans = max(ans,it.first);
            }
        }
        return ans;
    }
        if(freq[nums[0]] == 1){
            ans = max(ans,nums[0]);
        }
        if(freq[nums[n-1]] == 1){
            ans = max(ans,nums[n-1]);
        }
        return ans;
    }
};