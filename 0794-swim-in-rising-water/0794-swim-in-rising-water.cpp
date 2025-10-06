class Solution {
public:
vector<vector<int>> directions{{1,0},{0,1},{-1,0},{0,-1}};
int n;

bool isPossible(vector<vector<int>> &grid,int i,int j,int t,vector<vector<bool>>& visited){
    if(i < 0 || i>=n || j < 0 || j>=n || visited[i][j] == true || grid[i][j] > t ){
        return false;
    }
    visited[i][j] = true;
    if( i == n - 1 && j == n - 1){
        return true;
    }
    for(auto &dir : directions){
        int i_ = i + dir[0];
        int j_ = j + dir[1];

        if(isPossible(grid,i_,j_,t,visited)){
            return  true;
        }
    }
    return false;

}
    int swimInWater(vector<vector<int>>& grid) {
        n = grid.size();
        int low = grid[0][0];
        int high = n*n - 1;

        int result = 0;

        while(low <= high){
            int mid= (low + high)/2;

            vector<vector<bool>>visited(n,vector<bool>(n,false));

            if(isPossible(grid,0,0,mid,visited)){ //BFS,DFS
                result = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }

        }
        return result;
    }
};