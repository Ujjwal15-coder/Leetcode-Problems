class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int x : nums){
            mp[x]++;
        }
        for(int i = k; ;i+=k){
            if(i % k == 0) {
                if(mp.find(i) != mp.end()){
                continue;
            }
             return i;
          }
        }
        return -1;
    }
};
    
