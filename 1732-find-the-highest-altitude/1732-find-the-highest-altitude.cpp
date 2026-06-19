class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curr = 0;
        int result = 0;

        for(int i : gain){
            curr += i;
            result = max(curr,result);
        }
        return result;
    }
};