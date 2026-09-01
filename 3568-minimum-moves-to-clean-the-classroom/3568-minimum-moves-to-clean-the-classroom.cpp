class Solution {
public:
    int minMoves(vector<string>& classroom, int energy) {

        int m = classroom.size();
        int n = classroom[0].size();

        int sr, sc;

        vector<pair<int,int>> litter;

        // Find S and all L
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (classroom[i][j] == 'S') {
                    sr = i;
                    sc = j;
                }

                if (classroom[i][j] == 'L') {
                    litter.push_back({i, j});
                }
            }
        }

        int k = litter.size();

        // No litter
        if (k == 0)
            return 0;

        int fullMask = (1 << k) - 1;

        // bestEnergy[r][c][mask]
        vector<vector<vector<int>>> bestEnergy(
            m,
            vector<vector<int>>(
                n,
                vector<int>(1 << k, -1)
            )
        );

        queue<tuple<int,int,int,int,int>> q;

        // r, c, mask, energy, steps
        q.push({sr, sc, 0, energy, 0});

        bestEnergy[sr][sc][0] = energy;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while (!q.empty()) {

            auto [r, c, mask, e, steps] = q.front();
            q.pop();

            // Collected everything
            if (mask == fullMask)
                return steps;

            for (int d = 0; d < 4; d++) {

                int nr = r + dr[d];
                int nc = c + dc[d];

                // Outside grid
                if (nr < 0 || nr >= m ||
                    nc < 0 || nc >= n)
                    continue;

                // Obstacle
                if (classroom[nr][nc] == 'X')
                    continue;

                // Need one energy to move
                if (e == 0)
                    continue;

                int ne = e - 1;
                int nmask = mask;

                // Collect litter
                if (classroom[nr][nc] == 'L') {

                    for (int i = 0; i < k; i++) {

                        if (litter[i].first == nr &&
                            litter[i].second == nc) {

                            nmask |= (1 << i);
                            break;
                        }
                    }
                }

                // Reset energy
                if (classroom[nr][nc] == 'R') {
                    ne = energy;
                }

                // Already reached this state better
                if (ne <= bestEnergy[nr][nc][nmask])
                    continue;

                bestEnergy[nr][nc][nmask] = ne;

                q.push({
                    nr,
                    nc,
                    nmask,
                    ne,
                    steps + 1
                });
            }
        }

        return -1;
    }
};