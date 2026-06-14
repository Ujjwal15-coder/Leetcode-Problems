class Solution {
public:

    vector<vector<int>> dp;

    int solveRec(int idx, int prev,
                 int rows, int cols,
                 vector<vector<int>>& cnt) {

        if(idx >= cols)
            return 0;

        if(dp[idx][prev + 1] != -1)
            return dp[idx][prev + 1];

        int ans = INT_MAX;

        for(int j = 0; j <= 9; j++) {

            if(j != prev) {

                ans = min(ans,
                          rows - cnt[idx][j] +
                          solveRec(idx + 1, j,
                                   rows, cols, cnt));
            }
        }

        return dp[idx][prev + 1] = ans;
    }

    int minimumOperations(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> cnt(m, vector<int>(10, 0));

        for(int c = 0; c < m; c++) {
            for(int r = 0; r < n; r++) {
                cnt[c][grid[r][c]]++;
            }
        }

        dp.assign(m, vector<int>(11, -1));

        return solveRec(0, -1, n, m, cnt);
    }
};