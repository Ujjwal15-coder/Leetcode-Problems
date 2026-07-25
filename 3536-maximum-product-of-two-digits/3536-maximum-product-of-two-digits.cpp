
#include <algorithm>

class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n);
        sort(s.begin(),s.end());

        int sL = s.length();
        // method 1 for fetching last char and second Largest char
        //  string lastChar(1,s[sL -1]);
        //  string secondLastChar(1,s[sL - 2]);

        int num1 = s[sL-1] - '0';
        int num2 = s[sL-2] - '0';

        return num1 * num2;

    
    }
};