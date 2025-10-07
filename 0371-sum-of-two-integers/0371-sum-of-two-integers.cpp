class Solution {
public:
    int getSum(int a, int b) {
        uint32_t carry = a & b;
        int sumWithoutCarry = a ^ b;
        int ActualCarry = carry << 1;

        while(carry != 0){
         
            carry = sumWithoutCarry & ActualCarry;
            sumWithoutCarry = sumWithoutCarry ^ ActualCarry;
            ActualCarry = carry << 1;
        }
        return sumWithoutCarry;
    }
};