class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {

        int maxVal = INT_MIN;
        int minVal = INT_MAX;
        int n = nums.size();
        if(n < 3) return -1;

        for(int num : nums){
            maxVal = max(maxVal,num);
            minVal = min(minVal,num);

        }
        for(int num : nums){
            if(num != maxVal && num != minVal){
                return num;
            }
        }
        return -1;
    }
};