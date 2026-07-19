class Solution {
public:
    string smallestSubsequence(string s) {
        stack<char> st;
        unordered_map<char,int> last;
        unordered_map<char,bool> isVisited;

        for(int i = 0; i < s.size();i++){
            last[s[i]] = i;
        }

        for(int i = 0; i < s.size();i++){
            char curr = s[i];

            if(isVisited[curr])
                continue;

            while(!st.empty() && st.top() > curr && last[st.top()] > i){
                isVisited[st.top()] = false;
                st.pop();
            } 
            st.push(curr);
            isVisited[curr] = true;
        }
       string ans;
       while(!st.empty()){
        ans += st.top();
        st.pop();
       }
       reverse(ans.begin(), ans.end());

        return ans;
    }
};