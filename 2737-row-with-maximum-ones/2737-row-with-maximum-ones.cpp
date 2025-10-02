class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int cnt_max = -1;
        int index = 0;

        for(int i = 0; i < n;i++){

            int cnt_ones = 0;

            for(int j = 0; j < m; j++){
                cnt_ones += mat[i][j];
            }

                if(cnt_ones > cnt_max){
                    cnt_max = cnt_ones;
                    index = i;
                }
            
        }
        return {index,cnt_max};
    }
};