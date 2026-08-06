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

           if(prod % t == 0)
            return n;
        
        n++;
    }
    
    }
};

/*  very important thing
 
 while (condition) → keeps running while the condition is true; exits when it becomes false.

 while (true) → runs forever unless you use break or return inside the loop. */