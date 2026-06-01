class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater<int>()); //TC- O(n log n)
        int result = 0;
        int i = 0;
       while(i < cost.size()){ //SC - O(1)
            if(i % 3 != 2)
            result += cost[i];
            i++;
        }
        return result;
    }
};