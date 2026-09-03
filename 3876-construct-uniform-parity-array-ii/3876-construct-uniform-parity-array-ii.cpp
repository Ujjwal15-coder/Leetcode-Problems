class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minVal = nums1[0];
        for(int i = 0; i < nums1.size();i++){
            minVal = min(minVal,nums1[i]);
        }
        //if minVal is odd
        if(minVal % 2 == 1){ 
            return true;
        }
        //minval is Even
        else{

            for(int i = 0; i < nums1.size();i++){
                if(nums1[i] % 2 == 1){
                    return false;
                }
            }
        }
        return true;
    }
};