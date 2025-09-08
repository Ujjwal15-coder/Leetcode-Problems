class Solution {
public:
    int findMax(vector<int> &v) {
        int maxi = INT_MIN;
        for (int x : v) {
            maxi = max(maxi, x);
        }
        return maxi;
    }

    long long calculateHours(vector<int> &v, int hourly) {
        long long totalH = 0;
        for (int x : v) {
            totalH += (x + hourly - 1) / hourly; // integer ceiling division
        }
        return totalH;
    } 

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = findMax(piles);
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long totalH = calculateHours(piles, mid);

            if (totalH <= h) {
                high = mid - 1; // possible answer, try smaller speed
            } else {
                low = mid + 1; // need faster speed
            }
        }
        return low;
    }
};
