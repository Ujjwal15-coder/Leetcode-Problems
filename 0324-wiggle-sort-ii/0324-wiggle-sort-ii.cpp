class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int> temp = nums;
        int left = (n - 1)/2;
        int right = n - 1;

        for(int i = 0;i < n;i++){

            if(i % 2 == 0){
                nums[i] = temp[left];
                left--;
            }
            else{
                nums[i] = temp[right];
                right--;
            }
        }
    }
};