class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> freq;
        for(char ch: chars){
            freq[ch]++;
        }
        int count = 0;
        
        for(string word : words){
            unordered_map<char,int> freqW;
        
        bool milgaya = true;
        for(char ch:word){
            
            freqW[ch]++;
        if(freqW[ch] > freq[ch]){
            
                milgaya = false;
                break;
        }
        }
        
        
         if(milgaya) count += word.size();
        }
        return count;
    }
};