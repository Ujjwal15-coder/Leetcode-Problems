
#include <algorithm>

class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n);
        sort(s.begin(),s.end());

        int sL = s.length();

         string lastChar(1,s[sL -1]);
         string secondLastChar(1,s[sL - 2]);

        int num1 = stoi(lastChar);
        int num2 = stoi(secondLastChar);

        return num1 * num2;

    
    }
};