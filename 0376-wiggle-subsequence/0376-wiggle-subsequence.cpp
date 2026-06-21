class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n = nums.size();
        if(n < 2) return n;
        int prevDiff = nums[1] - nums[0];
        int count = 0;
        if(prevDiff != 0){
            count = 2;
        }
        else{
            count = 1;
        }

        for(int i = 2; i < n; i++){
            int currDiff = nums[i] - nums[i-1];
            if((currDiff > 0 && prevDiff <= 0) || (currDiff < 0 && prevDiff >= 0)) {
                count += 1;
                prevDiff = currDiff;
                
            }

        }

        return count;
    }
};