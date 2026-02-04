class Solution {
public:
    int countTriplets(vector<int>& arr) {

        vector<int> prefix_xor(arr.begin(),arr.end());

        prefix_xor.insert(prefix_xor.begin(),0);

        int n = prefix_xor.size();

        for(int i = 1; i < n; i++){
            prefix_xor[i] ^= prefix_xor[i-1];
        }

        int count_triplets = 0;
        for(int i = 0; i < n; i++){
            for(int k = i + 1;k < n;k++){
                if(prefix_xor[k] == prefix_xor[i]){
                    count_triplets += (k - i - 1);
                }
            }
        }
        return count_triplets;
    }
};