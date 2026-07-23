class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
            return 1;
        if(n == 2)
            return 2;

        int ans = 1;
        while(ans <= n){ //T.C -- > O(log n)
            ans = ans << 1;
            } //S.C --> O(1)
        return ans;
    }
};