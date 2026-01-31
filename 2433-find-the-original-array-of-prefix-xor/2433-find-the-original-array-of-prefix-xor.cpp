class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();
        vector<int> arr(n);
           arr[0] = pref[0];
           int a = pref[0];
        for(int i = 1; i < n;i++){
            arr[i] = a^pref[i];
            a = a ^ arr[i];

        }
        return arr;
    }
};