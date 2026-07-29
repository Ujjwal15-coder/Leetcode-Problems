class Solution {
public:
    static constexpr long long MAX = 1000001;

    long long nCk(int n, int k) {
        k = min(k, n - k);
        long long res = 1;
        for (int i = 1; i <= k; i++) {
            res = res * (n - i + 1) / i;
            if (res >= MAX)
                return MAX;
        }
        return res;
    }

    long long countWays(vector<int>& cnt) {
        int total = accumulate(cnt.begin(), cnt.end(), 0);

        long long res = 1;

        for (int x : cnt) {
            res *= nCk(total, x);
            if (res >= MAX)
                return MAX;
            total -= x;
        }

        return res;
    }

    string smallestPalindrome(string s, int k) {
        vector<int> freq(26);

        for (char c : s)
            freq[c - 'a']++;

        vector<int> half(26);

        char mid = 0;

        for (int i = 0; i < 26; i++) {
            half[i] = freq[i] / 2;
            if (freq[i] & 1)
                mid = 'a' + i;
        }

        if (countWays(half) < k)
            return "";

        int len = accumulate(half.begin(), half.end(), 0);

        string left;

        while (len--) {

            for (int c = 0; c < 26; c++) {

                if (half[c] == 0)
                    continue;

                half[c]--;

                long long ways = countWays(half);

                if (ways >= k) {
                    left.push_back(char('a' + c));
                    break;
                }

                k -= ways;
                half[c]++;
            }
        }

        string right = left;
        reverse(right.begin(), right.end());

        if (mid)
            return left + string(1, mid) + right;

        return left + right;
    }
};