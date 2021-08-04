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
    
    void sol(TreeNode* root, vector<int>&node)
    {
        if(root)
        {
            sol(root->left, node);
            node.push_back(root->val);
            sol(root->right, node);
        }
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>node;
        sol(root, node);
        return node;
   
    }
};