class Solution {
public:
    bool check(string s)
    {
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
          
            if(s[i] == '(')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }
                st.pop();
            }

        }
        if(st.empty())
        {
            return true;
        }
        return false;
    }

    void recSol(string temp,int n,vector<string>& res)
    {
        if(temp.length() == 2*n)
        {
            if(check(temp))
            {
                res.push_back(temp);
            
            }
            return;
        }

        recSol(temp + "(",n,res);
        recSol(temp + ")",n,res);


    }

    vector<string> generateParenthesis(int n) {

        vector<string> res;
        recSol("",n,res);
        return res;
        
    }
};
