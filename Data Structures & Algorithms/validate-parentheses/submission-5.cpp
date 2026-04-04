class Solution {
public:
    bool isValid(string s) {
        if(s.length() % 2 != 0)
        {
            return false;
        }

        stack<char> st;


        for(char l : s)
        {
            if(l == '(' || l == '{' || l == '[')
            {
                st.push(l);
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }
                if((l == ')' && st.top() == '(') || (l == '}' && st.top() == '{') || (l==']' && st.top()=='['))
                {
                  st.pop();
                }
                else
                {
                    return false;
                }

            }
        }

        if(!st.empty())
        {
            return false;
        }
        return true;
        
    }
};
