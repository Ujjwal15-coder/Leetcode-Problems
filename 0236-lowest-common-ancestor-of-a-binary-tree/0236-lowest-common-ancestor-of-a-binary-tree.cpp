/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == nullptr)
            return nullptr;
        
        if(root -> val == p -> val || root -> val == q -> val)
            return root;
        
        TreeNode* leftLAC = lowestCommonAncestor(root -> left,p,q);
        TreeNode* rightLAC = lowestCommonAncestor(root-> right,p,q);

        if(leftLAC && rightLAC)
            return root;
        
        if(leftLAC != NULL)
            return leftLAC;
        else
            return rightLAC;
    }
};