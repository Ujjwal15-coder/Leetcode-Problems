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
int solveRec(TreeNode* root,int val){
    if(!root){
        return 0;
    }
    val = (2*val) + 1*root->val;

    if(root->left == NULL && root->right==NULL){
        return val;
    }
    return solveRec(root->left,val) + solveRec(root->right,val);
}

    int sumRootToLeaf(TreeNode* root) {
        return solveRec(root,0);
    }
};