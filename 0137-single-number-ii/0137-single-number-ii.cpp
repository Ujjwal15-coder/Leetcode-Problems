class Solution { //1st approch -- O(nlogn)
public:
    int singleNumber(vector<int>& nums) {
        // map<int,int> mp;
        // for(int i = 0; i < nums.size(); i++){
        //     mp[nums[i]]++;
        // }
        // for(auto it:mp){
        //     if(it.second == 1){
        //         return it.first;
        //     }
        // }
        // return 0;

        //2nd approch
    sort(nums.begin(),nums.end());
    int n = nums.size();
    for(int i = 1; i < n;i+=3){
        if(nums[i] != nums[i-1]){
            return nums[i-1];
        }
    }
        return nums[n-1];
    }
};