class Solution {
public:
    void sol(int index, vector<int>& candidates,vector<int>& temp,vector<vector<int>>& res, int target)
    {
     int sum = 0;
     for(auto m : temp)
     {
        sum += m;
     }

     if(sum >  target)
     {
        return;
     }
     if(sum == target)
     {
      res.push_back(temp);
      return;
     }



      for(int i=index;i<candidates.size();i++)
      {
        if(i > index && candidates[i] == candidates[i-1])
        {
            continue;
        }
            temp.push_back(candidates[i]);
            sol(i+1,candidates,temp,res,target);
            temp.pop_back();
        
      }
    }
  
     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());
        vector<int> temp;
        vector<vector<int>> res;

        sol(0,candidates, temp, res, target);

        return res;
        
    }
};
