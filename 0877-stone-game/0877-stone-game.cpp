class Solution {
public:
    int solveMem(int i,int j,vector<int> &piles,vector<vector<int>> &dp){
        if(i == j)
            return 0;
        if(i > j)
            return true;

        if(dp[i][j] != -1)
            return dp[i][j];

        int take_i = piles[i] + min(solveMem(i + 2,j,piles,dp),solveMem(i+1,j-1,piles,dp));

        int take_j = piles[j] + min(solveMem(i+1,j-1,piles,dp),solveMem(i,j-2,piles,dp));

        return dp[i][j] = max(take_i,take_j);
    }
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        int total_Score = accumulate(piles.begin(),piles.end(),0);

        vector<vector<int>> dp(n,vector<int>(n,-1));

        int alice_Score = solveMem(0,n-1,piles,dp);
        int bob_Score = total_Score - alice_Score;

        return alice_Score >= bob_Score;
    }
};