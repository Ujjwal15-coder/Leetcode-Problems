class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int left = 0;
        string ans ="";
        int countOnes = 0;
        for(int right = 0; right < s.length();right++){
            if(s[right] == '1'){
                countOnes++;
            }

            if(countOnes == k){
                while(s[left] == '0'){
                    left++;
                }

                string current = s.substr(left, right - left + 1);
                if(ans == ""){
                    ans = current;
                }
                else if(current.length() < ans.length()){
                    ans = current;
                }
                else if(current.length() == ans.length() && current < ans){
                    ans = current;
                }
                left++;
                countOnes--;

            }
        }
        return ans;
    }
};