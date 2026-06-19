class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> smaller;
        vector<int> middle;
        vector<int> high;

        for(int num:nums){
            if(num < pivot)
                smaller.push_back(num);
            else if(num == pivot)
                middle.push_back(num);
            else
                high.push_back(num);
        
        }
        // to maintain relative order
        vector<int> result;

        // for(int x : smaller){
        //     result.push_back(x);
        // }
        // for(int y : middle){
        //     result.push_back(y);
        // }
        // for(int z : high){
        //     result.push_back(z);
        // }
        result.insert(result.end(),smaller.begin(),smaller.end());
        result.insert(result.end(),middle.begin(),middle.end());
        result.insert(result.end(),high.begin(),high.end());


        return result;
    }
};