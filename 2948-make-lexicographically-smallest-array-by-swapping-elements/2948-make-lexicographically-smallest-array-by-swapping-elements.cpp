class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        vector<pair<int,int>> arr;
        for(int i = 0; i < nums.size();i++){
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());
        for(int i = 0; i < arr.size();i++){
            int j = i + 1;
            for(; j < arr.size();j++){
                if((arr[j].first - arr[j-1].first) > limit){
                    break;
                }
            }
             vector<int> values;
            vector<int> indices;

            for(int k = i; k < j; k++) {
                values.push_back(arr[k].first);
                indices.push_back(arr[k].second);
            }

            // Sort original indices
            sort(indices.begin(), indices.end());

            // Put smallest values at smallest indices
            for(int k = 0; k < values.size(); k++) {
                nums[indices[k]] = values[k];
            }
            i = j - 1;
        }
        return nums;
    }
};