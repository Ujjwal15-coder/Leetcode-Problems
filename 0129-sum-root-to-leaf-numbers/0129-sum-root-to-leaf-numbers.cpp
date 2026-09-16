/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int helper(TreeNode* root,int num){

        if(root == nullptr){
            return 0;
        }

        num = 10*num + root -> val;

        if(root -> left == nullptr && root -> right == nullptr){
            return num;
        }

        return helper(root -> left,num) + helper(root -> right,num);

        
    }
    int sumNumbers(TreeNode* root) {
        return helper(root,0);
    }
};