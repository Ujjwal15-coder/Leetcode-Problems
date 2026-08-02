class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        unordered_map<int,unordered_map<int,int>> freq;
        for(auto &p : pick){
            int player = p[0];
            int balls = p[1];

            freq[player][balls]++;
        }
        int count = 0;
        for(int player = 0;player < n;player++){

            for(auto &it: freq[player]){

            if(it.second >= player + 1){
                count++;
                break;
                }
            }
        }
        return count;
    }
};