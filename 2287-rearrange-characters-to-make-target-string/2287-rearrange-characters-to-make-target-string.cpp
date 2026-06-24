class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int> sCount(26,0);
        for(char ch: s){
            sCount[ch-'a']++;
        }
        vector<int> targetCount(26,0);
        for(char ch : target){
            targetCount[ch-'a']++;
        }
        int count = INT_MAX;
        for(int i = 0; i < 26; i++)
        {

            if(targetCount[i] > 0)
            { 
            
            count = min(count,sCount[i]/targetCount[i]);
            }
            
        }
        return count;
    }
};