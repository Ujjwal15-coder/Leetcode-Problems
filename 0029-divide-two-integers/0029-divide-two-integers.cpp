class Solution {
public:
    int divide(int dividend, int divisor) {

        // 1️⃣ Mandatory overflow case
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        // 2️⃣ Determine sign
        bool sign = (dividend < 0) ^ (divisor < 0);

        // 3️⃣ Convert BEFORE abs
        long long n = llabs((long long)dividend);
        long long d = llabs((long long)divisor);

        long long ans = 0;

        // 4️⃣ Bitwise division
        while (n >= d) {
            int count = 0;
            while (n >= (d << (count + 1))) {
                count++;
            }
            ans += (1LL << count);
            n -= (d << count);
        }

        // 5️⃣ Apply sign safely
        return sign ? -ans : ans;
    }
};
