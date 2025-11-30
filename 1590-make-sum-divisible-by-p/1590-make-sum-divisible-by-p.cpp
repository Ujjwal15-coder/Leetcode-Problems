class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        int sum = 0;
      for(int i : nums){
        sum = (sum + i) % p;
      }
      int target = sum % p;
      if(target == 0) return 0;

      unordered_map<int,int> mp;
      int curr = 0;
      mp[0] = -1;
      int result = n;

      for(int j = 0;j < n;j++){
        curr = (curr + nums[j])%p;
        int prev = (curr - target + p)%p;

        if(mp.find(prev) != mp.end()){
            result = min(result,j - mp[prev]);
        }
        mp[curr] = j;
      }

return result == n ? -1: result;
        
    }
};