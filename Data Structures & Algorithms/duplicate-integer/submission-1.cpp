class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        set<int> st;

        for(auto num : nums)
        {
            if(st.count(num) == 1)
            {
                return true;
            }
            st.insert(num);
        }

        return false;
        
    }
};