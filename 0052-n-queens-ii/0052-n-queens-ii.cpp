

class Solution {
public:
   bool isSafe(int row,int col,vector<string> &board,int n){
    int duprow = row;
    int dupcol = col;
    while(row >= 0 && col >= 0){
        if(board[row][col] == 'Q') return false;
        row--;
        col--;
    }
    col = dupcol;
    row = duprow;
    while(col >= 0){
        if(board[row][col] == 'Q') return false;
        col--;
    }
    row = duprow;
    col = dupcol;
    while(row < n && col >= 0){
        if(board[row][col] == 'Q') return false;
        row++;
        col--;
    }
    return true;
   }    
 
public:
    void solve(int col,vector<string> &board,int &count,int n){
        if(col == n){
            count++;
            return;
        }
        for(int row = 0;row < n;row++){
            if(isSafe(row,col,board,n)){
                board[row][col] = 'Q';
                solve(col + 1,board,count,n);
                board[row][col] = '.';
            }
        }
    }

public:
   int totalNQueens(int n) {
        
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        int count = 0;
        solve(0,board,count,n);
        return count;
    }
};