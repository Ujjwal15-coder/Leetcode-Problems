class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> freq;
        int n = s.length();
        int left = 0,ans = 0;
        int maxAns = INT_MIN;
        for(int right = 0; right < n;right++){
            freq[s[right]]++;

            while(freq[s[right]] > 2){
                freq[s[left]]--;
                left++;
                }
        
         ans =  right - left + 1;
         maxAns = max(maxAns,ans);
        }
        return maxAns;
    }
};