class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        map<char,int> mp;
        int j=0;
        int length =INT_MIN;

        if(s == "")
        {
            return 0;
        }

        for(int i=0;i<s.length();i++)
        {
            if(mp.find(s[i])!=mp.end() && mp[s[i]]>=j)
            {
                j = mp[s[i]]+1;
            }
       
                mp[s[i]] = i;
            


            if(i-j+1 >  length)
            {
                length = i-j+1;
            }
        }

        return length;
        
    }
};
