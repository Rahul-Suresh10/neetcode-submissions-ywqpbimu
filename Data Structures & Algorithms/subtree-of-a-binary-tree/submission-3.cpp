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
      bool sol(TreeNode* p, TreeNode* q)
      {
        if(p == NULL && q == NULL)
        {
            return true;
        }

        if((p == NULL && q != NULL) || (p != NULL && q == NULL))
        {
            return false;
        }

        return p->val == q->val && sol(p->left, q->left) && sol(p->right, q->right);
      }

      void traverse(TreeNode* p , TreeNode* q, bool& ans)
      {
        if(p == NULL || ans == true)
        {
            return;
        }

        if(p->val == q->val)
        {
            ans = sol(p, q);
        }
        traverse(p->left, q, ans);
        traverse(p->right, q, ans);
      }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        bool res = false;
        traverse(root, subRoot, res);

        return res;


        
    }
};
