class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        string s = to_string(num1);
        int n = s.size();
        string o = to_string(num2);
        int m = o.size();
        string p = to_string(num3);
        int a = p.size();

        // if(n != m && m != a)
        //     return 0;

        while(n < 4){
            s = "0" + s;
            n++;
        } 
        while(m < 4){
             o = "0" + o;
             m++;
        }
        while(a < 4) {
            p = "0" + p;
            a++;
        }


        string ans ="";

        for (int i = 0; i < 4; i++) {
        char mn = min({s[i], o[i], p[i]});
         ans += mn;
        }
        return stoi(ans);
    }
};