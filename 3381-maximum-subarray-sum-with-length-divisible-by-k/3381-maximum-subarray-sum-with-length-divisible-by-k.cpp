class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long> prefixSum(n);
        prefixSum[0] = nums[0];
        for(int i = 1; i < n;i++){
        prefixSum[i] = prefixSum[i-1] + nums[i];
        }

        long long maxSum = LLONG_MIN;

        for(int start = 0; start < k; start++){
            long long currentSum = 0;
            int i = start;

            while(i < n && i + k - 1 < n){
                int j = i + k - 1;
                long long subSum = prefixSum[j] - ((i > 0) ? prefixSum[i - 1] : 0);
            
            currentSum = max(subSum,currentSum + subSum);
            maxSum = max(maxSum,currentSum);
            i = i + k;
            }
        }
        return maxSum;
    }
};