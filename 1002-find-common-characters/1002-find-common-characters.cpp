class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> freq(26,INT_MAX);
        for(string w:words){
            vector<int> cnt(26,0);
            for(char ch:w){
                cnt[ch - 'a']++;
            }
            for(int i = 0;i < 26;i++){
                freq[i] = min(freq[i],cnt[i]);
            }
        }
        vector<string> result;
        for(int i = 0; i < 26;i++){
            while(freq[i] --> 0){
                result.push_back(string(1,i+'a'));
            }
        }
     return result;
    }
};