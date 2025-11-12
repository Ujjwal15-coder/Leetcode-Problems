class Solution {
public:
    void function(int start,int k,int target,vector<int> &current,vector<vector<int>> &ans){
        if(current.size() == k && target == 0){
            ans.push_back(current);
            return;
        }
        if(current.size() > k || target < 0)
        return;

        for(int i = start;i <=9;i++){
            current.push_back(i);
            function(i + 1,k,target - i,current,ans);
            current.pop_back();
        }

    }


public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> current;
        vector<vector<int>> ans;
        function(1,k,n,current,ans);
        return ans;
        
    }
};