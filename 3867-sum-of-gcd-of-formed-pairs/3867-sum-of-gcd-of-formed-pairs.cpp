class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        vector<long long> ans;
        for(int i = 0 ; i < n; i++){
            maxi = max(maxi,nums[i]);
        
            int a = maxi;
            int b = nums[i];
            
            while(b != 0){

                int rem = a % b;
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