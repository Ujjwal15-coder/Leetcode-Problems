class Solution {
public:
    long long flowerGame(int n, int m) {
        long long cntEven1 = 0, cntOdd1 = 0;
        long long cntEven2 = 0,cntOdd2 = 0;
        long long ans = 0;
        
        if(n%2==0){
            cntEven1 = n/2;
            cntOdd1 = n/2;
        }else{
            cntEven1 = n/2;
            cntOdd1 = n/2+1;
        }
        if(m%2==0){
            cntEven2 = m/2;
            cntOdd2 = m/2;
        }
        else{
            cntEven2 = m/2;
            cntOdd2 = m/2+1;
        }
        ans = cntEven1*cntOdd2 + cntOdd1*cntEven2;

        return ans;

    }
};