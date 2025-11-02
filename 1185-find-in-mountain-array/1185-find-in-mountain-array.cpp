/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int peakIndexInMountainArray(MountainArray &mountainArr){
        int n = mountainArr.length();
        int low = 0,high = n - 1;
        while(low < high){
            int mid = low + (high - low)/2;

        if(mountainArr.get(mid) < mountainArr.get(mid+1)){
            low = mid + 1;
        }
        else{
            high = mid;
        }

        }
        return low;
    }

    int binarySearch(MountainArray &mountainArr,int low,int high,int target){
        int mid;
        while(low <= high){
             mid = low + (high - low)/2;

             if(mountainArr.get(mid) == target) return mid;

             else if(mountainArr.get(mid) > target){
                high = mid - 1;
             }
             else{
                low = mid + 1;
             }
        }
        return -1;

    }
    int revbinarySearch(MountainArray &mountainArr,int low,int high,int target){
        int mid;
        while(low <= high){
             mid = low + (high - low)/2;

             if(mountainArr.get(mid) == target) return mid;

             else if(mountainArr.get(mid) < target){
                high = mid - 1;
             }
             else{
                low = mid + 1;
             }
        }
        return -1;

    }

    int findInMountainArray(int target, MountainArray &mountainArr) {

        int n = mountainArr.length();

        int peakIndex = peakIndexInMountainArray(mountainArr);

        int idx = binarySearch(mountainArr,0,peakIndex,target);

        if(idx == -1){
            return revbinarySearch(mountainArr,peakIndex,n - 1,target);
        }
        return idx;

        
    }
};