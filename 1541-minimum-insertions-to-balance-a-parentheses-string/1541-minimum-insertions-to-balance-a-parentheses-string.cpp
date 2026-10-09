class Solution {
public:
    int minInsertions(string s) {
        int count = 0;
        int ans = 0;
        for(int i = 0; i < s.length();i++){
            if(s[i] == '('){
                count += 1;
            }
            else{
                if(i + 1 < s.length() && s[i+1] == ')'){
                i++;
                }
                else{
                    ans++;
                }
                if(count > 0){
                    count--;
                }
                else{
                    ans++;
                }
            }
            
        }
        return ans + 2 * count;
    }
};