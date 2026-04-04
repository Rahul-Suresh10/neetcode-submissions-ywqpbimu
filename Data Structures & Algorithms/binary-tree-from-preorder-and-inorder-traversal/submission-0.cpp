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
    int preIndex = 0;
    TreeNode* sol(vector<int> preorder, vector<int> inorder, int start, int end)
    {
        if(start > end)
        {
            return NULL;
        }

        int val = preorder[preIndex++];

        TreeNode* root = new TreeNode(val);

        int index = 0;
        for(int i=0;i<inorder.size();i++)
        {
            if(inorder[i] == val)
            {
                index = i;
                break;
            }
        }

        root->left = sol(preorder, inorder, start, index-1);
        root->right = sol(preorder, inorder, index+1, end);


        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {


        return sol(preorder, inorder, 0, preorder.size()-1);


        
    }
};
