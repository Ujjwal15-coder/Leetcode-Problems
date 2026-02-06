class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int left = 0;
        int maxWindow = 0;

        for(int right = 0;right < n;right++){
            while(nums[right] > ((long long)k * nums[left])){
                left++;
            }
            int currWindow = (right - left)+1;
            maxWindow = max(currWindow,maxWindow);
        }
        return n - maxWindow; 
    }
};