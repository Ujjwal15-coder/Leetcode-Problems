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
    vector<int> path;
    vector<vector<int>> ans;
    void traversal(TreeNode* root,int targetSum){
        if(root == NULL)
            return;
        
        path.push_back(root -> val);
        targetSum -= root -> val;

        if(root -> left == NULL && root -> right == NULL){
            if(targetSum == 0){
                ans.push_back(path);
            }
        }
        traversal(root -> left,targetSum);
        traversal(root -> right,targetSum);
        
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        traversal(root,targetSum);
        return ans;
    }
};