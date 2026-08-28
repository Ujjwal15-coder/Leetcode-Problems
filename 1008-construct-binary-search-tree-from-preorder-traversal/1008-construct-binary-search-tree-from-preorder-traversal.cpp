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
    unordered_map<int,int> mp;
    TreeNode* helper(vector<int> &preorder,vector<int> &inorder,int &preIdx,int left,int right){
        if(left > right){
            return NULL;
        }
        TreeNode* root = new TreeNode(preorder[preIdx]);
        int inorderIdx = mp[preorder[preIdx]];
        preIdx++;

        root -> left = helper(preorder,inorder,preIdx,left,inorderIdx-1);
        root -> right = helper(preorder,inorder,preIdx,inorderIdx+1,right);

        return root;

    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int> inorder = preorder;
        sort(inorder.begin(),inorder.end());
        int preIdx = 0;
        for(int i = 0; i < inorder.size();i++){
            mp[inorder[i]] = i;
        }
        return helper(preorder,inorder,preIdx,0,inorder.size()-1);


    }
};