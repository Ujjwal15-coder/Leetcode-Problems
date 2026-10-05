class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);

        vector<int> even , odd;

        for(char ch : s){
            int digit = ch - '0';

            if(digit % 2 == 0){
                even.push_back(digit);
            }
            else{
                odd.push_back(digit);
            }
        }
        sort(even.rbegin(),even.rend());
        sort(odd.rbegin(),odd.rend());

        int o = 0, e = 0;

        for(int i = 0; i < s.size();i++){
            int digit = s[i] - '0';

            if(digit % 2 == 0){
                s[i] = even[e++] + '0';
            }
            else{
                s[i] = odd[o++] + '0';
            }
        }
        return stoi(s);
    }
};