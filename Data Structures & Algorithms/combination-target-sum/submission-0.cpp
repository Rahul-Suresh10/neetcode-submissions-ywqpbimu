class Solution {
public:
    void recSol(int i,int sum,vector<int> &temp,vector<int> nums,vector<vector<int>>&res)
    {

        if(i < 0 || sum < 0)
        {
            return;
        }

        if(sum == 0)
        {
            res.emplace_back(temp);
            return;
        }

        if(nums[i] <= sum)
        {
          temp.push_back(nums[i]);
          recSol(i,sum - nums[i],temp,nums,res);
          temp.pop_back();
        }
        
        recSol(i-1,sum,temp,nums,res);

        
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {

        vector<vector<int>> res;
        vector<int> temp;

        sort(nums.begin(),nums.end());
        recSol(nums.size()-1,target,temp,nums,res);

        return res;
        
    }
};
