#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void recSol(int i,vector<int> &temp,vector<int> &candidates,int target,vector<vector<int>>& res)
    {
        if(i < 0)
        {
            return;
        }
        if(i == candidates.size())
        {
            if(target == 0)
            {
                res.emplace_back(temp);
            }
            return;
        }

        temp.push_back(candidates[i]);
        recSol(i+1,temp,candidates,target-candidates[i],res);
        temp.pop_back();
        recSol(i+1,temp,candidates,target,res);
    }


    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;

        vector<int> temp;

        recSol(0,temp,candidates,target,res);

        map<vector<int>,int> mp;
        for(int i=0;i<res.size();i++)
        {
            sort(res[i].begin(),res[i].end());
            mp[res[i]]++;
        }

        vector<vector<int>> ans;
        for(auto &m : mp)
        {
            ans.push_back(m.first);
        }
        return ans;
    }
};
