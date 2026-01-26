class Solution {
public:
bool check(vector<int>&nums,int p,int mid){
int k=0;
    for(int i=0; i<nums.size()-1; i+=1){

        if(nums[i+1]-nums[i]<=mid){

            k++;
            i++;
       if(k==p){
            return true;
        }

        }
     


    }
    return false;





}
    int minimizeMax(vector<int>& nums, int p) {
        int n = nums.size();
       sort(nums.begin(),nums.end());
         int low=0;
         int high=nums[n-1]-nums[0];
         if(p==0){
            return 0;
         }

int ans;
         while(low<=high){


            int mid=low+(high-low)/2;


            if(check(nums,p,mid)){

                ans=mid;
                high=mid-1;


            }
            else{
                low=mid+1;
            }
         }


        return low;
    }
};