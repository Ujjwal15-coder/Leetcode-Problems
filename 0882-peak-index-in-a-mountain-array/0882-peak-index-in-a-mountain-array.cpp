
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        if (n < 3) return -1; // must have at least 3 elements to form a mountain

        int low = 1, high = n - 2; // peak can’t be at the ends

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // Check if mid is the peak
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) 
                return mid;

            // Move to the side that has the increasing slope
            else if (arr[mid] > arr[mid - 1]) 
                low = mid + 1;
            else 
                high = mid - 1;
        }

        return -1; // no valid peak found (not a mountain array)
    }
};
