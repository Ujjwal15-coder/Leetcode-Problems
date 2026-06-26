class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        mp[0] = 1;
        int cummSum = 0;
        int n = nums.size();
        int validPoints = 0;
        int ans = 0;

        for(int j = 0; j < n; j++){
            if(nums[j] == target){
                validPoints += mp[cummSum];
                cummSum += 1;
            }
            else{
                cummSum -= 1;
                validPoints -= mp[cummSum];
            }
                mp[cummSum] += 1;
                ans += validPoints;
        }
         return ans;
    }
};