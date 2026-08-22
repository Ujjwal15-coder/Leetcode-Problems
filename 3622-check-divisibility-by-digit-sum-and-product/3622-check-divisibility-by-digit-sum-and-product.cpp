class Solution {
public:
    bool checkDivisibility(int n) {
        int original = n;
        int digit;
        int sum = 0;
        int prod = 1;
        while(n > 0){
        digit = n % 10;

        sum += digit;
        prod *= digit;
        n = n/10;
        }
        
        int issekatega = sum + prod;

        if(original % issekatega == 0){
            return true;
            }
        
        return false;
    }
};