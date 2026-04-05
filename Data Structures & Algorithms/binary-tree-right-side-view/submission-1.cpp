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




    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;

        if(root == NULL)
        {
            return res;
        }

        int level = 0;
        map<int,vector<int>> mp;

        queue<pair<TreeNode*, int>> q;
        q.push({root, level});

        while(!q.empty())
        {
            pair<TreeNode*, int> p = q.front();
            q.pop();

            int lev = p.second;
            TreeNode* node = p.first;

            mp[lev].push_back(node->val);

            if(node->left != NULL)
            {
                q.push({node->left, lev+1});
            }

            if(node->right != NULL)
            {
                q.push({node->right, lev+1});
            }

        } 

        

        for(auto m : mp)
        {
            vector<int> p = m.second;

            int v = p[p.size()-1];
            res.push_back(v);

        }

        return res;


        
    }
};
