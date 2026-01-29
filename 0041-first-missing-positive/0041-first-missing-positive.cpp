class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size(); 
        for(int i = 0; i < n;i++){
            int x = nums[i];

            while(x >= 1 && x <=n && nums[i] != i + 1 && x != nums[x-1] ){
                swap(nums[i],nums[nums[i]-1]);
                x = nums[i];
                
            }
        
        }
         for(int i = 0; i < n;i++){
                if(nums[i] != i + 1){
                    return i + 1;
                }
         }
        

return n + 1;
        
    }
};