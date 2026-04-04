class Solution {
public:
    void subsets(int i, vector<int>& nums, vector<int>& temp, set<vector<int>>& res)
    {
        if(i == nums.size())
        {
            vector<int> co = temp;
            sort(co.begin(), co.end());
            res.insert(co);
            return;
        }

        temp.push_back(nums[i]);
        subsets(i+1, nums, temp, res);
        temp.pop_back();
        subsets(i+1,nums, temp, res);

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        
        set<vector<int>> res;
        vector<int> temp;

        subsets(0, nums,temp, res);

        vector<vector<int>> sol;

        for(auto a : res)
        {
            sol.push_back(a);
        }

        return sol;
         
        
    }
};
