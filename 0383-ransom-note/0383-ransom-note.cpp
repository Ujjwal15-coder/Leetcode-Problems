class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> countMagz(26,0);
        for(char &ch : magazine){
            countMagz[ch-'a']++;
        }
        vector<int> countNote(26,0);
         for(char &ch : ransomNote){
            countNote[ch-'a']++;
        }
        bool ok = true;
        for(int i = 0; i < 26;i++){
        if(countNote[i] > countMagz[i]){
            ok = false;
            break;
            }
        }
        return ok;
    }
};