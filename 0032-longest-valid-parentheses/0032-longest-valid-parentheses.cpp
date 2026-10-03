class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> stk;
        stk.push(-1);  // Base index to help calculate lengths
        int maxLen = 0;

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(') {
                stk.push(i);  // Store index of '('
            } else {
                stk.pop();  // Pop matching '(' index
                if (stk.empty()) {
                    stk.push(i);  // Push current ')' index as base
                } else {
                    maxLen = max(maxLen, i - stk.top());
                }
            }
        }

        return maxLen;
    }
};
