class Solution {
public:
    int hammingDistance(int x, int y) {
        int xor_value = x ^ y;
        int count = 0;
        for(int i = 0; i < 32;i++){
            if(((xor_value >> i)&1) == 1){ //if it comes 1 then we count otherwise move i++
                count ++;
            }
        }
        return count;
    }
};