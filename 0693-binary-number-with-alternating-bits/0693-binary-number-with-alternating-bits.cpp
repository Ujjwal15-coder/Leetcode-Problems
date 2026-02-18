class Solution {
public:
    bool hasAlternatingBits(int n) {
        bitset<32> b(n);
        int highestBitSet = log2(n);

        for(int i = 0; i <=highestBitSet;i++){
            if(b[i] == b[i+1]) return false;
        }
        return true;
    }
};