class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
     //   sort(aliceSizes.begin(),aliceSizes.end());
     //   sort(bobSizes.begin(),bobSizes.end());

        int sumA = accumulate(aliceSizes.begin(),aliceSizes.end(),0);
        int sumB = accumulate(bobSizes.begin(),bobSizes.end(),0);

        int avg = (sumA + sumB)/2;
        int needAlices = avg - sumA;

             map<int,int> mp;
             for(int i = 0; i < aliceSizes.size();i++ ){
                mp[aliceSizes[i]]++;
             }
             
             for(int x:bobSizes){
                int y = x - needAlices;
                if(mp.count(y)){
                    return {y,x};
                }
             }
             


        return {};

        
    }
};