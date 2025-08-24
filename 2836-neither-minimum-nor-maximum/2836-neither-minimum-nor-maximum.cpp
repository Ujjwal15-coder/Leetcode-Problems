class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return -1;
        int maxVal = INT_MIN,minVal = INT_MAX;

        for(int num : nums){
            maxVal=max(maxVal,num);
            minVal=min(minVal,num);

        }
        for(int num : nums){
            if(num!=maxVal && num!=minVal){
                return num;
            }

        }
        return -1;
    }
};