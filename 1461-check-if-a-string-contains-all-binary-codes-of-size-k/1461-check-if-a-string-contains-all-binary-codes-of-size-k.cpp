class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.length();
        unordered_set<string>st;

        int codes = 1 << k; // means pow(2,k) 

        for(int i = k; i <= n; i++){
            string substring = s.substr(i - k,k);

            if(!st.count(substring)){
                st.insert(substring);
                codes--;
            }

            if(codes == 0)
                return true;
            
        }
        return false;
    }
};