class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int totalDistance = 0;

        for(int i = 0;i < 32;i++)
        {
             int count_ones = 0;
             int count_zeroes = 0;
            for(int j = 0; j < nums.size();j++){
                if(((nums[j] >> i) & 1) == 1){
                    count_ones += 1;
                }
                else{
                    count_zeroes += 1;
                }
            }
            totalDistance += (count_ones * count_zeroes); 
        }
        return totalDistance; 
    }
};