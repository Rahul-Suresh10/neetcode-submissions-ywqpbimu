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

    int sol(TreeNode*root, TreeNode*head)
    {
        if(root == NULL)
        {
            return 0;
        }

        int left = sol(root->left, head);

        int right = sol(root->right, head);

        if(root == head)
        {
            return left + right;
        }

        return 1 + max(left, right);

        
    }

    void traverse(TreeNode* root,int& maxValue)
    {
        if(root == NULL)
        {
            return;
        }

        int val = sol(root, root);

        maxValue = max(maxValue, val);


        traverse(root->left, maxValue);
        traverse(root->right, maxValue);
    }



    int diameterOfBinaryTree(TreeNode* root) {

        int maxValue = 0;

        traverse(root, maxValue);

        return maxValue;

     
    }
};
