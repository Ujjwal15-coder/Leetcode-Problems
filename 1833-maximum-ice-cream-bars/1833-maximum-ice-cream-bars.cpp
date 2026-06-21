class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) 
    {
        sort(costs.begin(),costs.end());
        int sum = 0;
        int count = 0;
       
        for(int cost : costs){
            if(sum + cost > coins)
                break;

            sum += cost;
            count++;
        }
        return count;
    }
};