class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();
        vector<int> rightHandLength(n,0);
        int rightMatched = 0;
        int i = n - 1;
        int j = m - 1;

        while(i >= 0){
            if(j >= 0 && word1[i] == word2[j]){
                rightMatched++;
                j--;
            }
            rightHandLength[i] = rightMatched;
            i--;
        }
        
        i = 0;
        j = 0;
        bool canChange = true;
        vector<int> seq;

        while(i < n && j < m){

            if(word1[i] == word2[j]){
                seq.push_back(i);
                j++;
            }
            else if(canChange == true && i+1 < n && rightHandLength[i+1] >= m - j - 1){
                seq.push_back(i);
                j++;
                canChange = false;
            }
            i++;
        }
        if(j == m) return seq;

            return {};
        
    }
};