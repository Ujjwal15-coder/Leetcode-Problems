class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> arr;

        for(int i = 0; i < grid.size();i++){
            for(int j = 0; j < grid[i].size();j++){
                arr.push_back(grid[i][j]);
            }
        }
        int rem = arr[0] % x;
        for(int i = 0; i < arr.size();i++){
            if(arr[i] % x != rem)
                return -1;
        }

        sort(arr.begin(),arr.end());

        int midElement = arr[arr.size()/2];

        int count= 0;
        for(int i = 0; i < arr.size();i++){
            count += abs(arr[i] - midElement);
        }

        return count/x;
    }
};