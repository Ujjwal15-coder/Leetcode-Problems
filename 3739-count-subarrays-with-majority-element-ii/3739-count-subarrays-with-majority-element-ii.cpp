class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        int cummSum = 0;
        unordered_map<int,int> mp;
        mp[0] = 1; //should be 1 from starting
        int validPoints = 0;
        long long ans = 0;
            for(int j = 0; j< n;j++){
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