class Solution {
public:

    long long calculateHours(vector<int> &v, int hourly) {
        long long totalH = 0;
        for (int i : v) {
            totalH += (i + hourly - 1) / hourly; // integer ceiling division
        }
        return totalH;
    } 

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(),piles.end());
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
