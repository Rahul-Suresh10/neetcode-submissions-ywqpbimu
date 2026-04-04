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
    void inorder(TreeNode* r, vector<int>& vt)
    {
        if(r == NULL)
        {
            return;
        }

        inorder(r->left, vt);
        vt.push_back(r->val);
        inorder(r->right, vt);
    }
    int kthSmallest(TreeNode* root, int k) {
                vector<int> vt;
        inorder(root, vt);
        
        return vt[k-1];


        
    }
};
