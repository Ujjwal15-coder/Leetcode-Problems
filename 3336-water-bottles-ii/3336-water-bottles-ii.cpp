class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int result = numBottles;
        int emptyBottles = numBottles;

        while(emptyBottles >= numExchange){
            result++;
            emptyBottles -= numExchange;
            emptyBottles++;
            numExchange++;
        }
        return result;
    }
};