class Solution {
public:
   void combinations(int start,int n,int k,vector<int> &current, vector<vector<int>> &ans){
    if(current.size() == k){
        ans.push_back(current);
        return;
    }

    for(int i = start;i <= n;i++){
        current.push_back(i);
        combinations(i + 1,n,k,current,ans);
        current.pop_back();
    }

   }
  

public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> current;
        combinations(1,n,k,current,ans);
        return ans;
        
    }
};