class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xor1 = 0;
        for(int i:nums){
            xor1 = xor1 ^ i;
        }
        int rightMostBit = (xor1 & (-xor1));

        int b1 = 0,b2 = 0;

        for(int i = 0; i < nums.size();i++){
            if(nums[i] & rightMostBit){
                b1 = b1 ^ nums[i];
            }
            else{
                b2 = b2 ^ nums[i];
            }
        }
        return {b1,b2};
    }
};