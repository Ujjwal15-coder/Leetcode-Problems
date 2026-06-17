// class Solution {
// public:
//     void wiggleSort(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int n = nums.size();
//         int median = nums[n/2];

//         int low = 0;
//         int mid = 0;
//         int high = n - 1;

//         while(mid <= high){

//             if(nums[mid] < median){
//                 swap(nums[low],nums[mid]);
//                 low++;
//                 mid++;
//             }
//             else if(nums[mid] == median){
//                 mid++;
//             }
//             else{
//                 swap(nums[mid],nums[high]);
//                 high--;
//             }

//         }
        
        
//     }
// }; --> Wiggle Sort I 

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> temp = nums;

        sort(temp.begin(),temp.end());

        int n = nums.size();

        int left = (n - 1)/2;
        int right = n - 1;

        for(int i = 0; i < n;i++){

            if(i % 2 == 0){
                nums[i] = temp[left--];
            }
            else{
                nums[i] = temp[right--];
            }
        }

    }
};