class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        int prefixSum = 0;
        unordered_map<int,int> freq;
        freq[0] = 1;

        for(int i : nums){
            prefixSum += i;

            int rem = (prefixSum % k + k) % k;
            ans = ans + freq[rem];
            freq[rem]++;
        }
        return ans;
    }
};