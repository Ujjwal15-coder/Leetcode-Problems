class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        map<char,int>mp;
        for(char c:brokenLetters) mp[c]++;
        int ans = 0,flag = 0;

        for(int i = 0;i < text.size(); i++){
            if(mp[text[i]] > 0) flag = 1;
            if(text[i]==' ' || i == text.size()-1){
                if(flag == 0) ans++;
                flag = 0;
            }
        }
        return ans;
    }
};