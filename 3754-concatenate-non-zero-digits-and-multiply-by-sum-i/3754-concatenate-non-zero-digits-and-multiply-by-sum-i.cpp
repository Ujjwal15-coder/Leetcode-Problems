class Solution {
public:
    typedef long long ll;
    long long sumAndMultiply(int n) {
        ll x = 0;
        ll sum = 0;
        ll p = 1;

        while(n > 0){
            int digit = n % 10;
            sum += digit;

            if(digit > 0){
                x += digit * p;
                p*=10;
            }
            n/=10;
        }
        return x * sum;
    }
};