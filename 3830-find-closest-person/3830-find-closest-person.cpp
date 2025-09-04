#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int whoReachesFirst(int x, int y, int z) {
        int dist1 = abs(x - z);
        int dist2 = abs(y - z);
        if (dist1 < dist2) return 1;
        else if (dist2 < dist1) return 2;
        else return 0;
    }

    // wrapper with the expected name
    int findClosest(int x, int y, int z) {
        return whoReachesFirst(x, y, z);
    }
};
