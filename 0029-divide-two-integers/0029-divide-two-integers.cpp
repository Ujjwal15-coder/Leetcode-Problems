class Solution {
public:
    int divide(int dividend, int divisor) {
      if (dividend == divisor) return 1;
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        if (divisor == 1) return dividend;
        bool sign = true;

        if(dividend >= 0 && divisor < 0) sign = false;
        else if(dividend <= 0 && divisor > 0) sign = false;

        long long n = llabs((long long)dividend);
        long long d = llabs((long long)divisor);
        // divisor = abs(divisor);

        long ans = 0;

        while(n >= d){
            int count = 0;
            while(n >=( d << (count+1))){
                count++;
            }
             ans += (1 << count); // (1 << count) = 2 ^ count

            n = n - (d *( 1 << count)); //2^count

        }
        if(ans == (1 << 31) && sign == true){
            return abs(INT_MAX);
        }
        if(ans == (1 << 31) && sign == false){
            return abs(INT_MIN);
        }

        return sign ? ans : -ans;
        
    }
};