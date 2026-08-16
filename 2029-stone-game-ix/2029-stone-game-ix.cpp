class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int cnt[3] = {0};
        for(int x:stones){
            if(x % 3 == 0)
                cnt[0]++;
            if(x % 3 == 1)
                cnt[1]++;
            if(x % 3 == 2)
                cnt[2]++;
        }
        if(cnt[0] % 2 == 0){
            return cnt[1] > 0 && cnt[2] > 0;
        }
        return abs(cnt[1] - cnt[2]) > 2;
    }
};