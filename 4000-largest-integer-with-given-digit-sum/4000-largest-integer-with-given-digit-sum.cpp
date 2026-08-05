class Solution {
public:
    int largestInteger(int n, int s) {
        string ans = "";
        if(s > 9 * n){
            return -1;
        }
        if(s == 0)
            return 0;
        while(s > 9){
            s -= 9;
            ans.push_back('9');
        }
        ans.push_back('0' + s);

        while(ans.size() != n){
            ans.push_back('0' + 0);
        }

        return stoi(ans);
    }
};