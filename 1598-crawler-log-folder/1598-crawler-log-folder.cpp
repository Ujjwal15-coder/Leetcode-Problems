class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;
        for(auto &file : logs){

            if(file == "../"){
                if(!st.empty()){
                    st.pop();
                }
            }
            else if(file == "./"){
                continue;
            }
            else{
                st.push(file);
            }
        }
        return st.size();
    }
};