class Solution {
public:

    void recSol(int i,vector<int> temp,vector<int>& nums,vector<vector<int>>&res)
    {
        if(i == nums.size())
        {
            res.emplace_back(temp);
            return;
        }

        temp.push_back(nums[i]);
        recSol(i+1,temp,nums,res);
        temp.pop_back();
        recSol(i+1,temp,nums,res);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        

        vector<vector<int>> res;

        recSol(0,{},nums,res);



        return res;


        
    }
};
