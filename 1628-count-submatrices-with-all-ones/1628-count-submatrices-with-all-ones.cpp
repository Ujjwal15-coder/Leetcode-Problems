class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> height(n, 0);
        int result = 0;

        for (int i = 0; i < m; i++) {
            // Update height for histogram
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 0)
                    height[j] = 0;
                else
                    height[j]++;
            }

            // Count submatrices using current histogram
            result += countFromHistogram(height);
        }

        return result;
    }

private:
    int countFromHistogram(vector<int>& height) {
        int n = height.size();
        int count = 0;
        stack<int> st;
        vector<int> sum(n, 0);

        for (int j = 0; j < n; j++) {
            while (!st.empty() && height[st.top()] >= height[j]) {
                st.pop();
            }

            if (!st.empty()) {
                int prev = st.top();
                sum[j] = sum[prev] + height[j] * (j - prev);
            } else {
                sum[j] = height[j] * (j + 1);
            }

            st.push(j);
            count += sum[j];
        }

        return count;
    }
};
