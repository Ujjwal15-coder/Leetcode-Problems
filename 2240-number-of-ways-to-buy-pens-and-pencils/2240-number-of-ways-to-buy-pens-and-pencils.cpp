class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long ans = 0;

        for (int pens = 0; pens * 1LL * cost1 <= total; pens++) {
            int remaining = total - pens * cost1;

            ans += remaining / cost2 + 1;
        }

        return ans;
    }
};