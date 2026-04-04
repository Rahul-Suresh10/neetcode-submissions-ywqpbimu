class Solution {
public:

  void sol(int i,string temp, int n, vector<string>& res, int o, int c)
  {
    if(i == (2*n))
    {
        res.push_back(temp);
        return;
    }

    if(o < n)
    {
        sol(i+1,temp+"(",n,res,o+1,c);
    }

    if(c < n && c < o)
    {
        sol(i+1,temp+")",n,res,o,c+1);
    }

  }



    vector<string> generateParenthesis(int n) {

        vector<string> res;
        string temp = "";

        sol(0,temp,n,res,0,0);

        return res;
        
    }
};
