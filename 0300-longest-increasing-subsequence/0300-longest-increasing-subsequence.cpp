class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

        vector<int> temp;

        for (int num : nums) {

            int left = 0;
            int right = temp.size() - 1;

            // Binary Search
            while (left <= right) {
                int mid = left + (right - left) / 2;

                if (temp[mid] < num) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }

            // left is the position where num should be placed
            if (left == temp.size()) {
                temp.push_back(num);
            } else {
                temp[left] = num;
            }
        }

        return temp.size();
    }
};