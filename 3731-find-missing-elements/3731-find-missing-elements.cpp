class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
         int n = nums.size();
         vector<int> ans;
         sort(nums.begin(),nums.end());
         
          for(int i = 0; i < n-1;i++){

            int current = nums[i]+1;

            while(current < nums[i+1]){
                ans.push_back(current);
                current++;
            }
          }

         return ans;
    }
};