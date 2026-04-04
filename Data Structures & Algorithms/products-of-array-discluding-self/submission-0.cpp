class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int product = 1;
        int zeroCount = 0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == 0)
            {
              zeroCount++;
            }
            else
            {
                product = product * nums[i];
            }
        }

        vector<int> res;



        for(int i=0;i< nums.size();i++)
        {
            if(zeroCount >=2)
            {
              res.push_back(0);
            }
            else if(zeroCount == 1)
            {
                if(nums[i] == 0)
                {
                    res.push_back(product);
                }
                else
                {
                    res.push_back(0);
                }
                
            }
            else
            {
                int ans = product / nums[i];
                res.push_back(ans);
            }

        }

        return res;

    }
};
