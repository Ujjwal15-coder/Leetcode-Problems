class Solution {
public:
    int solveMem(string &a, string &b,int i,int j,vector<vector<int>> &dp){
        if(i == a.length())
            return b.length() - j;
        
        if(j == b.length())
            return a.length() - i;

        if(dp[i][j] != -1)
            return dp[i][j];

        int ans = 0;
        if(a[i] == b[j]){
            return solveMem(a,b,i+1,j+1,dp);
        }
        else{
            int insertAns = solveMem(a,b,i,j+1,dp);

            int delAns = solveMem(a,b,i+1,j,dp);

            int replaceAns = solveMem(a,b,i+1,j+1,dp);

            ans = 1 + min(insertAns,min(delAns,replaceAns));
        }
        return dp[i][j] = ans;
    }
    int minDistance(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();

        vector<vector<int>> dp(n, vector<int>(m, -1));
        return solveMem(word1,word2,0,0,dp);
    }
};