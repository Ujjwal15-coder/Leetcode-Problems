class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        if(arr.size() == 1)
            return 1;
        int prev = 0,curr = 0,currLen = 1,maxLen = 1;

        for(int i = 1; i < arr.size();i++){
            if(arr[i-1] < arr[i]){
                curr = 1;
            }
            else if(arr[i-1] > arr[i]){
                curr = -1;
            }
            else{
                curr = 0;
            }
            if(curr == 0)
                currLen = 1;

            else if(curr * prev == -1)
                currLen++;
            
            else
                currLen = 2;

            prev = curr;

            maxLen = max(maxLen, currLen);
        }
        return maxLen;
    }
};