class Solution {
public:
    int arrangeCoins(int n) {
        int low = 1, high = (int)sqrt(2.0 * n);
        int ans = 0;

        while(low <= high){
            int mid = low + (high - low)/2;
            long need = ((long)mid *( mid + 1))/2;

            if(need == n)
                return mid;
            if(need < n){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;  
            }
        }
        return ans;
    }
};