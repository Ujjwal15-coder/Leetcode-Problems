class Solution {
public:
    string simplifyPath(string path) {
        string token = "";
        
        stringstream ss(path);
        vector<string> st;
        
        while(getline(ss, token, '/')) {

            if(token == "" || token == ".") continue;
            
            if (token != "..") 
                st.push_back(token);
            else if (!st.empty()) 
                st.pop_back();
        }
        
        string result = "";
        
        for(auto &token : st){

            result = result + "/" + token;
        }
        
        if(result.length()==0) // if no directory or file is present
            result="/"; // minimum root directory must be present in result
        
        return result;
    }
};