class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<int,int> freq;
        int n = s.length();
        int left = 0,ans = 0;
        int maxAns = INT_MIN;
        for(int i = 0; i < n;i++){
            freq[s[i]]++;

            while(freq[s[i]] > 2){
                freq[s[left]]--;
                left++;
                }
        
         ans =  i - left + 1;
         maxAns = max(maxAns,ans);
        }
        return maxAns;
    }
};