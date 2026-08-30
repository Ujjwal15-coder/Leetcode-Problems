class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minIndex = 0;
        int maxIndex = 0;
        for(int i = 1; i < n;i++){
            if(nums[minIndex] > nums[i]){
                minIndex = i;
            }
            if(nums[maxIndex] < nums[i]){
                maxIndex = i;
            }
        }
        int left  = min(minIndex, maxIndex);
        int right = max(minIndex, maxIndex);

        int start_delete = max(minIndex,maxIndex) + 1;
        
        int end_delete = n - min(minIndex,maxIndex);

        int both_deletions = (left+1) + (n - right);

        return min({start_delete,end_delete,both_deletions});



    }
};