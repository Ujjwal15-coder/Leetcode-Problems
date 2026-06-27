class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<long long,int> mp;
        int maxi = 1;

        for(auto &i : nums){
            mp[i]++;
        }
        if(mp.count(1))
        {
            int ones = mp[1];
            if(ones % 2 == 0)
                ones--;
            maxi = max(maxi,ones);
        }

        for(auto &it : mp){
            if(it.first == 1) continue;
            
            int count = 0;
            long long curr = it.first;
            int square = curr * curr;

            while(mp.find(curr) != mp.end())
            {  
            
               if(mp[curr] >= 2){ count += 2; }
               else if(mp[curr] == 1) {
                count += 1;
                break;
               }
               curr = square;
               square = curr * curr;
               
            }
            maxi = max(maxi,count - (count % 2 == 0));
        }
        return maxi;
    }
};