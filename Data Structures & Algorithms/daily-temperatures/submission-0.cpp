class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        stack<int> st;
        vector<int> res(temperatures.size(),0);

        for(int i = temperatures.size()-1;i>=0;i--)
        {
            int currentTemp = temperatures[i];
            while(!st.empty() && temperatures[st.top()] <= currentTemp)
            {
                st.pop();
            }

            if(!st.empty())
            {
                res[i] = st.top() - i;
            }

            st.push(i);
           
           
        }

        

        return res;

        
    }
};
