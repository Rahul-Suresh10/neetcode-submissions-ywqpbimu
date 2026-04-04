class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     
     set<int> st;
     int longest = 0;
     for(auto & s: nums)
     {
       st.insert(s); 
     }

     for(auto &s : st)
     {
       
        if(!st.count(s-1))
        {
            int length = 0;
            while(st.count(s+length))
            {
                length++;
            }

            longest = max(longest, length);
          
        }
     }

     return longest;


    }
};
