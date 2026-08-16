class Solution {
public:
    int stoneGameVI(vector<int>& aliceValues, vector<int>& bobValues) {
        int n = aliceValues.size();
        vector<pair<int,int>> stones;

        for(int i = 0; i < n;i++){
            stones.push_back({aliceValues[i] + bobValues[i],i});
        }
        sort(stones.begin(),stones.end(),greater<pair<int,int>>());

        int aliceScore = 0;
        int bobScore = 0;
        for(int i = 0; i < stones.size();i++){
            int index = stones[i].second;
            if(i % 2 == 0){
                aliceScore += aliceValues[index];
            }
            else{
                bobScore += bobValues[index];
            }
        }
        if(aliceScore > bobScore) //alice wins
            return 1;
        if(bobScore > aliceScore)
            return -1; //bob wins
        
        return 0; //draw 
        
    }
};