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
    TreeNode* helper(vector<int> &nums,int l,int r){

        if(l > r){
            return nullptr;
        }
        
        int maxIndex = l;
        for(int i = l + 1; i <= r;i++){
            if(nums[i] > nums[maxIndex]){
                maxIndex = i;
            }
        }

        TreeNode* root = new TreeNode(nums[maxIndex]);
        root -> left = helper(nums,l,maxIndex - 1);
        root -> right = helper(nums,maxIndex + 1,r);

        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return helper(nums,0,nums.size() - 1);
    }
};