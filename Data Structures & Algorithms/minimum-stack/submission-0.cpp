class MinStack {
public:
stack<int> st;
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
        
    }
    
    void pop() {
        st.pop();
        
    }
    
    int top() {
        return st.top();
        
    }
    
    int getMin() {

        stack<int> temp = st;
        int minValue = INT_MAX;
        while(!temp.empty())
        {
            int x = temp.top();
            minValue = min(minValue, x);
            temp.pop();

        }
        return minValue;
        
    }
};
