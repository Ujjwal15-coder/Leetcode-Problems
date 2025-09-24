class Solution {
public:
    bool isPerfectSquare(int num) {
        long low = 1;
        long high = num;

        if(num < 0) return false;
        if(num == 0 || num == 1) return true;

        while(low <= high){
            long mid = (low + high)/2;
            long square = mid*mid;

            if(square == num){
            return true;
            }
            else if(square < num){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return false;
    }
};