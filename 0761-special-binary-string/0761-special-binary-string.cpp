class Solution {
public:
    
    string solveRec(string s){
        vector<string> specials;

        int start = 0;
        int sum = 0;

        for(int i = 0;i < s.length();i++){
            sum += s[i] == '1'? +1 : -1;

            if(sum == 0){
                string middle = s.substr(start + 1,i - start - 1);
                specials.push_back("1" + solveRec(middle) + "0");
                start = i + 1;
            }
        }
        sort(begin(specials),end(specials),greater<string>());

        string result;
        for(string &str : specials){
            result += str;
        }
        return result;
    }

    string makeLargestSpecial(string s) {
        return solveRec(s);
    }
};