class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int> div(word.size());
        long long prevRemainder = 0;
        for(int i = 0; i < word.size(); i++)
        {   
            int digit =  word[i]-'0';
            long long result = (prevRemainder * 10 + digit) % m;
            if(result == 0){
                div[i] = 1;
            }
            else{
                div[i] = 0;
            }
            prevRemainder = result;
        }
       return div;
    }
};