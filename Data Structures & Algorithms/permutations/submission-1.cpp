class Solution {
public:

   void sol(int i,vector<int>& nums, vector<int>& temp, vector<bool>& used,vector<vector<int>>& res)
   {
    if(i == nums.size())
    {
        res.push_back(temp);
        return;
    }

    for(int k=0;k<nums.size();k++)
    {
        if(used[k] == false)
        {
            used[k] = true;
            temp.push_back(nums[k]);
            sol(i+1,nums, temp,used,res);
            used[k]=false;
            temp.pop_back();
        }
    }
   }


    vector<vector<int>> permute(vector<int>& nums) {

        vector<bool> used(nums.size(), false);
        vector<vector<int>> res;
        vector<int> temp;

        sol(0,nums,temp,used,res);

        return res;
        
    }
};
 