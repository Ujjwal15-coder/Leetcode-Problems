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
    private:
        int leftHT(TreeNode* root){
            int idx = 0;
            while(root){
                idx++;
                root = root -> left;
            }
            return idx;
        }
        int rightHT(TreeNode* root){
            int idx = 0;
            while(root){
                idx++;
                root = root -> right;
            }
            return idx;
        }
public:
    int countNodes(TreeNode* root) {
        if(root == nullptr)
            return 0;
        int left = leftHT(root);
        int right = rightHT(root);

        if(left == right){
            return (1 << left) - 1;
        }
        
        return countNodes(root -> left) + countNodes(root -> right) + 1;
        
    }
};