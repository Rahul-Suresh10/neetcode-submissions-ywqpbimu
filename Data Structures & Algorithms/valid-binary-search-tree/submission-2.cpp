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

    bool isValidBST(TreeNode* root) {

        vector<int> vt;
        inorder(root, vt);
        int j= 0;
        for(int i=1;i<vt.size();i++)
        {
            if(vt[i] <= vt[j])
            {
                return false;
            }
            j++;
        }


        return true;



        
    }
};
