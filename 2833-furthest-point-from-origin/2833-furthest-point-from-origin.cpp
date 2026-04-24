class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int count = 0;
        int blank = 0;
        for(char &ch : moves){
            if(ch == 'L')
                count--;
            else if(ch == 'R')
                count++;
            else
                blank++;
        }
        return abs(count) + blank;
    }
};