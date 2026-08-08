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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> q;

        if(root == nullptr)
            return {};

        q.push(root);

        while(q.size() > 0){

            int size = q.size();
            vector<int> level;

            for(int i = 0; i < size;i++){
            
            TreeNode* curr = q.front();
            q.pop();

            level.push_back(curr -> val);
            if(curr -> left != NULL)
                q.push(curr -> left);

            if(curr -> right != NULL)
                q.push(curr -> right);
            }
            double sum = 0;
            for(int j = 0; j < level.size();j++){
                sum += level[j];
            }
            double avg = sum / level.size();
            ans.push_back(avg);
        }
        return ans;
    }
};