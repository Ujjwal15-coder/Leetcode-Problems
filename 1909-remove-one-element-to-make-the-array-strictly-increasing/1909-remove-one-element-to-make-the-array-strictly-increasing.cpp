class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        
        int n = nums.size();
        for(int i = 0; i < n; i++){
            bool ok  = true;
        vector<int> temp = nums;
        temp.erase(temp.begin() + i);
        for(int j = 0; j < temp.size() - 1;j++){
            if(temp[j] >= temp[j+1]){
                ok = false;
                break;
            }
        }
        if(ok)
            return true;
        }
        return false;
        
    }
};