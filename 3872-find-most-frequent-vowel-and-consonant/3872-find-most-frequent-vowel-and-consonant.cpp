class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> map;
        int maxi_vowel = 0;
        int maxi_consonant = 0;
        for(auto i:s ){

            map[i]++;

            if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u'){
                maxi_vowel = max(maxi_vowel,map[i]);
            }
            else{
                maxi_consonant = max(maxi_consonant,map[i]);
            }
        }
        return maxi_vowel + maxi_consonant;
    }
};