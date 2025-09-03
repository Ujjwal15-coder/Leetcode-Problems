class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n = points.size();
        // Sort by x ascending, y descending
        sort(points.begin(), points.end(), [](auto &a, auto &b) {
            if (a[0] == b[0]) return a[1] > b[1];
            return a[0] < b[0];
        });

        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                auto &A = points[i];
                auto &B = points[j];
                if (A[1] < B[1]) continue; // must satisfy ya >= yb

                bool ok = true;
                for (int k = i+1; k < j; k++) {
                    if (points[k][1] <= A[1] && points[k][1] >= B[1]) {
                        ok = false;
                        break;
                    }
                }
                if (ok) ans++;
            }
        }
        return ans;
    }
};



