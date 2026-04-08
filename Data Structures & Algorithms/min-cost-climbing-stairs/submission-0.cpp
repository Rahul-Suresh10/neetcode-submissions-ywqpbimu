class Solution {
public:


    int sol(int i,vector<int>&cost, vector<int>& dp)
    {
        if(i >= cost.size())
        {
            return 0;
        }


        if(dp[i] != -1)
        {
            return dp[i];
        }



        int left = sol(i+1,cost,dp);
        int right  = sol(i+2,cost, dp);


        return dp[i] = cost[i] + min(left, right);
    }



    int minCostClimbingStairs(vector<int>& cost) {

        vector<int> dp(cost.size()+1, -1);

        return min(sol(0,cost,dp), sol(1,cost,dp));
        
    }
};
