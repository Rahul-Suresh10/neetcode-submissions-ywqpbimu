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
    int sol(TreeNode* root, bool& res)
    {
        if(root == NULL)
        {
            return 0;
        }

        int left = sol(root->left, res);
        int right = sol(root->right, res);


        int diff = abs(left - right);

        if(diff > 1)
        {
           res = false;
        }


        return 1 + max(left, right);

    }

    bool isBalanced(TreeNode* root) {

        bool res = true;

        sol(root, res);

        return res;


        
    }
};
