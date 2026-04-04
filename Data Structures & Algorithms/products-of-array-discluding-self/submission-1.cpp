class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int zeroCount = 0;
        int product = 1;

        for(int i : nums)
        {
            if(i == 0)
            {
                zeroCount++;
            }
            else
            {
                product = product * i;
            }
        }

        vector<int> res;


        for(int i : nums)
        {
            if(zeroCount >= 2)
            {
                res.push_back(0);
            }
            else if(zeroCount == 1)
            {
                if(i == 0)
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
                int val = product / i;
                res.push_back(val);
            }
        }

        return res;

    }
};
