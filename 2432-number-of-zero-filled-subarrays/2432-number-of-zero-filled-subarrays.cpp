class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long result = 0;
        long long count = 0;  // count of consecutive zeros

        for (int num : nums) {
            if (num == 0) {
                count++;
                result += count;  // add all subarrays ending here
            } else {
                count = 0;  // reset
            }
        }

        return result;
    }
};
