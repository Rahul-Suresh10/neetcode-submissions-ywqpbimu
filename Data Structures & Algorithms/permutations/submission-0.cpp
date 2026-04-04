#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void recSol(int start, vector<int> nums,vector<vector<int>> &res)
    {
        if(start == nums.size())
        {
            res.emplace_back(nums);
        }

        for(int i = start;i<nums.size();i++)
        {
            swap(nums[start],nums[i]);
            recSol(start +1, nums,res);
            swap(nums[start],nums[i]);
        }

    }

    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> res;

        recSol(0,nums,res);

        return res;
        
    }
};
