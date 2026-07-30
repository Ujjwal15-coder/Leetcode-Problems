class Solution {
public:
    int minimumPushes(string word) {
        int ans = 0;
        int result = 0;
        
        for(int i = 0;i < word.length();i++){
            ans += (i/8) + 1; //() must required
            result += ans;
        }
        return ans;
    }
};