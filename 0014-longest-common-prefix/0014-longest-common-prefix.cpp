class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n = strs.size();
        string str1 = strs[0];
        string str2 = strs[n-1];
        int index = 0;
        while(index < str1.size()){
            if(str1[index] == str2[index]){
                index++;
            }
            else{
                break;
            }
        }
            return index==0 ? "" : str1.substr(0,index);
        
    }
};