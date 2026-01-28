class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map<int,int>mp;
        int xor1 = 0;
        for(int i:nums)
        {
            mp[i]++;
        }
        for(auto it:mp){
            if(it.second == 2){
                xor1 = xor1 ^ it.first;
            }
        }
        return xor1;
    }
};