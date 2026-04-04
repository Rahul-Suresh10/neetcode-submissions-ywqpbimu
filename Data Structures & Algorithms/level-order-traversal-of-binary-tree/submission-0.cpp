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
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> res;
        if(!root){return res;}

        queue<TreeNode*> q;

        q.push(root);
       


        while(!q.empty())
        {
            int s = q.size();
 
            vector<int> vt;
            for(int i=0;i<s;i++)
            {
               TreeNode* m = q.front();
               q.pop();
               vt.push_back(m->val);

               if(m->left != NULL)
               {
                q.push(m->left);
               }

               if(m->right != NULL)
               {
                q.push(m->right);
               }
            }
            res.push_back(vt);
        }
        return res;
        
    }
};
