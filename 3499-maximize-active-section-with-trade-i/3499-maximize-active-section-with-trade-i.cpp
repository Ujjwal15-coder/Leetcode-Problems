class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.size();
        //existing count of 1's
        int activeCount = count(begin(s),end(s),'1');
        vector<int> inactiveBlocks;
        int i = 0;

        while(i < n){
            if(s[i] == '0'){
                int start = i;
                while(i < n && s[i] == '0')
                    i++;
                inactiveBlocks.push_back(i-start);
            }
            else{
                i++;
            }
        }
        int maxiPairSum = 0;
        for(int i = 1 ; i < inactiveBlocks.size(); i++){
            maxiPairSum = max(maxiPairSum,inactiveBlocks[i] + inactiveBlocks[i-1]);
        }
        return maxiPairSum + activeCount;
    }
};