class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int totalXOR = 0;
        bool hasNoZero = false;

        for(int x : nums){
            totalXOR ^= x;

            if(x != 0)
                hasNoZero =  true;
        }
        if(!hasNoZero)
            return 0;
        if(totalXOR == 0)
            return n - 1;
        
        return n;
    }
};