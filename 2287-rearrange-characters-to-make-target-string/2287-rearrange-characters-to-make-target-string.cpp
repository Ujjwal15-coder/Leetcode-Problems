class Solution {
public:
    int rearrangeCharacters(string s, string target) {
         unordered_map<char,int> freqS,freqT;
        for(char ch : s){
            freqS[ch]++;
        }
        for(char st : target){
            freqT[st]++;
        }
        int ans = INT_MAX;
        for(auto &it:freqT){
            char character = it.first;

            int available = freqS[character];
            int required = it.second;

            int count = available/required;

            ans = min(ans,count);

        }

        return ans;
        
    }
};