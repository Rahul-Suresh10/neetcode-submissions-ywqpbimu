class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<string> st;

        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+" || tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/")
            {
                double x = stoi(st.top());
                st.pop();
                double y = stoi(st.top());
                st.pop();
                double res;
                if(tokens[i]=="+")
                {
                    res = x + y;
                }
                else if(tokens[i]=="-")
                {
                    res = y - x;
                }
                else if(tokens[i]=="*")
                {
                    res = x * y;
                }
                else
                {
                    res = y / x;
                }
      
               
                st.push(to_string(res));


            }
            else
            {
                st.push(tokens[i]);
            }
        }

        double ans = stoi(st.top());
        return ans;
        
    }
};
