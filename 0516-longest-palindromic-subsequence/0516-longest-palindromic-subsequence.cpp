class Solution {
public:
    int solveMem(string& a, string& b,int i,int j,vector<vector<int>> &dp){
        if(i == a.length())
            return 0;
        if(j == b.length())
            return 0;

        if(dp[i][j] != -1)
            return dp[i][j];
        
        int ans = 0;
        
        if(a[i] == b[j]){
         ans = 1 + solveMem(a,b,i+1,j+1,dp);
        }
        else{
            ans = max(solveMem(a,b,i+1,j,dp),solveMem(a,b,i,j+1,dp));
        }
        return dp[i][j] = ans;
    }
    int longestPalindromeSubseq(string s) {
        string revStr = s;
        reverse(revStr.begin(),revStr.end());
        
        vector<vector<int>> dp(s.length(),vector<int> (revStr.length(),-1));
        return solveMem(s,revStr,0,0,dp);
        
        
    }
};