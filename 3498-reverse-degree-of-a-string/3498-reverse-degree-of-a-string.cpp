class Solution {
public:
    int reverseDegree(string s) {
        int n = s.length();
        int ans = 0;

        for(int i = 0; i < n;i++){
            int reverseValue = 26 - (s[i] - 'a');
            ans += reverseValue * (i + 1);
        }
        return ans;
    }
};