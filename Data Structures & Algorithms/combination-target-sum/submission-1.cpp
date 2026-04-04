class Solution {
public:

    void findAns(int x, vector<vector<int>>& sol, vector<int>& temp,vector<int>& nums, int sum, int target)
    {
        
     if(sum == target)
     {
        sol.push_back(temp);
        return;
     }

     if(x == nums.size() || sum > target)
     {
        return;
     }



 


     
     temp.push_back(nums[x]);
     findAns(x, sol, temp, nums, sum + nums[x] , target);
     temp.pop_back();

     findAns(x+1, sol, temp, nums, sum, target);

    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {


        sort(nums.begin(), nums.end());

        vector<vector<int>> sol;
        vector<int> temp;

            findAns(0, sol, temp, nums, 0, target);
 
        return sol;
        
    }
}; 
