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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorderTraversalHelper(root, ans);
        return ans;
    }
    void inorderTraversalHelper(TreeNode* root, vector<int>& ans) {
        if (root == NULL) {
            return ;
        }
        inorderTraversalHelper(root->left, ans);
        ans.push_back(root->val);
        inorderTraversalHelper(root->right, ans);
    }
};
