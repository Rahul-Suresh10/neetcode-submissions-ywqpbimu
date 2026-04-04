class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        
        vector<int> res;

        for(int i=0;i<nums.size();i++)
        {
            int j = i+1;
            while(j<nums.size())
            {
                if(nums[i] + nums[j] == target)
                {
                    res.push_back(i);
                    res.push_back(j);
                    break;
                }
                j++;
            }
        }

        
        return res;


        
    }
};
