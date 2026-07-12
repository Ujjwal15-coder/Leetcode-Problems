class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp = arr;
        sort(temp.begin(),temp.end());
        
        int r = 1;
        unordered_map<int,int> rank;

        for(auto x : temp){
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