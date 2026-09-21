class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        unordered_set<int> st;

        int n = matrix.size();
        int m = matrix[0].size();

        for(int i = 0; i < n;i++){
            st.clear();

            for(int j = 0; j < m;j++){

                if(st.count(matrix[i][j])){
                    return false;
                }
                st.insert(matrix[i][j]);
            }

        }

        for(int j = 0; j < m;j++){
            st.clear();

            for(int i = 0; i < n;i++){

                if(st.count(matrix[i][j])){
                    return false;
                }
                st.insert(matrix[i][j]);
            }

        }
        return true;
    }
};