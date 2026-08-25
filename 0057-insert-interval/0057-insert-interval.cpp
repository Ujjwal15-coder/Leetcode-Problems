class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();
        int i = 0;
         vector<vector<int>> ans;
        while(i < n && intervals[i][1] < newInterval[0]){
            ans.push_back(intervals[i]);
            i++;
        }

        int currStart = newInterval[0];
        int currEnd = newInterval[1];

        while(i < n && intervals[i][0] <= currEnd){
            currStart = min(currStart, intervals[i][0]);
            currEnd = max(currEnd, intervals[i][1]);
            i++;
        }

          ans.push_back({currStart, currEnd});

        // Remaining intervals
        while (i < n) {
            ans.push_back(intervals[i]);
            i++;
        }

        return ans;
    }
};