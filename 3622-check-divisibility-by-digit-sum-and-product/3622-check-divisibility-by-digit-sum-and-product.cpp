class Solution {
public:
    bool checkDivisibility(int n) {
        int original = n; //copying to check further
        int digit;

        int sum = 0;
        int prod = 1;

        while(n > 0){
        digit = n % 10; //last digit extract karunga

        sum += digit;
        prod *= digit;

        n = n/10;
        }
        

        if(original % (sum + prod) == 0){
            return true;
            }
        
        return false;
    }
};