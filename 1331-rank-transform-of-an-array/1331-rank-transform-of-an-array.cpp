class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> arr2 = arr;
        sort(arr2.begin(),arr2.end());
        int r = 1;
        unordered_map<int,int> rank;

        for(auto x : arr2){
            if(rank.find(x) == rank.end()){
                rank[x] = r++;
            }
        }
        for(int i = 0; i < arr.size();i++){
            arr[i] = rank[arr[i]]; 
        }
        return arr;
    }
};