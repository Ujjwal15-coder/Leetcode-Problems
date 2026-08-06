class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
        int original = n;
        int prod = 1;
        while(original > 0){
            int digit = original % 10;
            prod *= digit;
            original /= 10;
        }

           if(prod % t == 0 && prod >= original)
            return n;
        
        n++;
    }
    
    }
};