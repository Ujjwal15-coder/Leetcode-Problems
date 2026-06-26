class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {

        // With comments

        int n = nums.size();

        // Cumulative sum till the previous element (before current j)
        int cummSum = 0;

        // Stores how many times each cumulative sum has appeared
        unordered_map<int, int> mp;

        // Initially, cumulative sum is 0 before starting
        mp[0] = 1;

        // Number of valid subarrays ending at current index
        int validPoints = 0;

        // Final answer
        long long ans = 0;

        for (int j = 0; j < n; j++) {

            if (nums[j] == target) {

                // Previous cumulative sums equal to current cummSum
                // become valid after adding the target
                validPoints += mp[cummSum];

                // Target contributes +1
                cummSum++;
            }
            else {

                // Non-target contributes -1
                cummSum--;

                // Some valid subarrays become invalid
                validPoints -= mp[cummSum];
            }

            // Store the current cumulative sum
            mp[cummSum]++;

            // Add all valid subarrays ending at j
            ans += validPoints;
        }

        return ans;
    }
};