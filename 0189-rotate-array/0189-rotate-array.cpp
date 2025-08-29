class Solution {
public: 
      void reversing(vector<int>& nums,int l,int r){
        while(l<r){
            swap(nums[l],nums[r]);
            l++;
            r--;
        }
      }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return; 
        k%=n; // handle k > n
        if (k == 0) return; 

        reversing(nums,0,n-1);  // Step 1: reverse whole array

        reversing(nums,0,k-1);  // Step 2: reverse first k elements

        reversing(nums,k,n-1);   // Step 3: reverse remaining n-k elements
    }
};