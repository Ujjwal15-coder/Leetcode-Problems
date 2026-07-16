class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        long long maxi = nums[0];
        vector<long long> ans;
        for(int i = 0 ; i < n; i++){
            maxi = max(maxi,(long long)nums[i]);
        
            long long a = maxi;
            long long b = nums[i];
            
            while(b != 0){

                long long rem = a % b;
                a = b;
                b = rem;
            }

                ans.push_back(a);
            }
         sort(ans.begin(), ans.end());
        
         long long sum = 0;

        int i = 0;
        int j = n - 1;

        while(i < j) {

            int a = ans[i];
            int b = ans[j];

            while(b != 0) {
                int rem = a % b;
                a = b;
                b = rem;
            }

            sum += a;

            i++;
            j--;
        }

        return sum;
    }
};