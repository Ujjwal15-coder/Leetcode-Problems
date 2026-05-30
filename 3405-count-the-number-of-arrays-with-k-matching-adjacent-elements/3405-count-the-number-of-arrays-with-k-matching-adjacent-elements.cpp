int MOD = 1e9 + 7;

class Solution {
public:
    long long findPower(long long a, long long b) {
        long long result = 1;

        while (b > 0) {
            if (b & 1) {
                result = (result * a) % MOD;
            }

            a = (a * a) % MOD;
            b >>= 1;
        }

        return result;
    }

    long long nCr(int n, int r,
                  vector<long long>& fact,
                  vector<long long>& invFact) {

        return (((fact[n] * invFact[r]) % MOD)
                * invFact[n - r]) % MOD;
    }

    int countGoodArrays(int n, int m, int k) {

        vector<long long> fact(n + 1, 1);
        for (int i = 2; i <= n; i++) {
            fact[i] = (fact[i - 1] * i) % MOD;
        }

        vector<long long> invFact(n + 1, 1);

        // Compute only one inverse factorial
        invFact[n] = findPower(fact[n], MOD - 2);

        // Fill remaining inverse factorials in O(n)
        for (int i = n - 1; i >= 0; i--) {
            invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
        }

        long long result = nCr(n - 1, k, fact, invFact);

        result = (result * m) % MOD;

        result = (result * findPower(m - 1, n - k - 1)) % MOD;

        return (int)result;
    }
};