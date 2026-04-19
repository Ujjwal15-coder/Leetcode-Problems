class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int result = 0;
        for(int i = 1; i < n; i++){
            if(colors[i] != colors[0])
                result = max(result,abs(i - 0));

            if(colors[i] != colors[n - 1])
                result = max(result,abs((n - 1) - i));
        }
        return result;
        
    }
};