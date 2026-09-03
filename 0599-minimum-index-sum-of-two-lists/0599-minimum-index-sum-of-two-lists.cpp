class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> mp;
        int minIndex = INT_MAX;

        int n1 = list1.size();
        for(int i = 0; i < n1;i++){
            mp[list1[i]] = i;
        }
        int j = 0;
        int n2 = list2.size();
        int sum = 0;
        vector<string> ans;

        while(j < n2){
            if(mp.find(list2[j]) != mp.end()){
                sum = mp[list2[j]] + j;
                if(sum < minIndex){
                minIndex = sum;
                ans.clear();
                ans.push_back(list2[j]);
        }

        else if(sum == minIndex){
            ans.push_back(list2[j]);
        }
            }
            j++;
        }
        return ans;
    }
};