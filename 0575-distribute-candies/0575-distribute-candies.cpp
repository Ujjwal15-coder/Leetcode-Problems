class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> st(candyType.begin(),candyType.end());
        int uniqueTypes = st.size();
        int n = candyType.size()/2;

        return min(uniqueTypes,n);



        
    }
};