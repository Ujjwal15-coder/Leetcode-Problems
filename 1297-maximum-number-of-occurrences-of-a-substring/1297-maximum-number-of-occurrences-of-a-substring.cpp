class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        unordered_map<string,int> mp;
        vector<int> freq(26,0);
        int distinct = 0;
        int k = minSize;

        for(int i = 0 ; i < k;i++){
            if(freq[s[i] - 'a'] == 0)
                distinct++;

                freq[s[i]-'a']++;
        }
        
    if(distinct <= maxLetters){
        mp[s.substr(0,k)]++;
    
        }
        
        //sliding window
        for(int right = k; right < s.size();right++){
            //remove left character
            int left = right - k;
            freq[s[left] - 'a']--;
            if(freq[s[left] - 'a'] == 0)
                distinct--;

            if(freq[s[right]-'a'] == 0)
                distinct++;

            freq[s[right]-'a']++;
        

        if(distinct <= maxLetters){
            mp[s.substr(left + 1,k)]++;
        }
        }
        
        int ans = 0;
        for(auto &it : mp){
            ans = max(ans,it.second);
        }
        return ans;
    }
};