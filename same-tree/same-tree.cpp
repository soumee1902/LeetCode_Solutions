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
    void inorder(TreeNode* root, vector<int>&ans)
    {
        if(root != NULL)
        {
            inorder(root->left, ans);
            ans.push_back(root->val);
            inorder(root->right, ans);
            
        }
        else{
            ans.push_back(100000);
        }
    }
    
    void preorder(TreeNode* root, vector<int>&ans)
    {
        if(root != NULL)
        {
            ans.push_back(root->val);
            preorder(root->left, ans);
            preorder(root->right, ans);
            
        }
        
        else{
            ans.push_back(100000);
        }
    }
    
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>inp, inq, prp, prq;
        
        inorder(p, inp);
        inorder(q, inq);
        
        preorder(p, prp);
        preorder(q, prq);
        
        if(inp == inq && prp == prq)
        {
            return true;
        }
        else{
            return false;
        }

    }
};