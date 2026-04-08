class Solution {
public:

    int sol(int i, int n,vector<int>& dp)
    {
        if(i > n)
        {
            return 0;
        }

        if(i == n)
        {
          return 1;
        }

        if(dp[i] != -1)
        {
            return dp[i];
        }


        int oneStep = sol(i+1,n,dp);

        int twoStep = sol(i+2,n,dp);

        return dp[i] = oneStep + twoStep;

        

    }

    int climbStairs(int n) {


        vector<int> dp(n+1,-1);
        return sol(0,n, dp);


        
    }
};
