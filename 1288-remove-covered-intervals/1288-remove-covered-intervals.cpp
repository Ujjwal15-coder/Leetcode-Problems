class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int left = -1,right = -1;
        int ans = 0;
        sort(intervals.begin(),intervals.end());

        for(auto &i : intervals){
            if(i[0] > left && i[1] > right){
                left = i[0];
                ans++;
            }
            right = max(right,i[1]);
        }
        return ans;
    }
};