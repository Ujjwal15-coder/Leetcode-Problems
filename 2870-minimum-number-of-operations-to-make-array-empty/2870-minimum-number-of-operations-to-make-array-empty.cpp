class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int &num:nums){
            mp[num]++;
        }
        int round = 0;
        for(auto &it:mp){
            int count = it.second;

            if(count == 1)
                return -1;
            if(count % 3 == 0) //3*k
                round += count/3;
            else
                round += (count/3) + 1; //(3k+1) or (3k+2)
        }
        return round;
        
    }
};