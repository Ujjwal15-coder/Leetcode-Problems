class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        
        for(int i = low ; i <= high; i++ ){
            int num = i;
            int count2 = 0;

            while(num > 0){
            int digit = num % 10;
            count2 += 1;
            num = num / 10;
            }

            if(count2 % 2 == 1) continue;

            int half = count2/2;
            num = i;           
            int rightHalfSum = 0;
            int leftHalfSum = 0;

            for(int j = 0; j < half;j++){
                int digit1 = num % 10;
                rightHalfSum += digit1;
                num = num / 10;
            }
            while(num > 0){
                int digit1 = num % 10;
                leftHalfSum += digit1;
                num = num / 10;
            }
            if(rightHalfSum == leftHalfSum)
                count++;
        }
        
        return count;
    }
};