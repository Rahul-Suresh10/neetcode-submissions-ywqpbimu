class Solution {
public:
   bool checkNotAllFound(map<char,int> mp)
   {
    for(auto c : mp)
    {
        if(c.second > 0)
        {
            return true;
        }
    }
    return false;
   }

   void reset(map<char, int>& mp, string t)
   {
    for(auto & m : mp)
    {
        m.second = 0;
    }
    for(char c : t)
        {
         mp[c]++;
        }
   }

    string minWindow(string s, string t) {

        map<char, int> mp;
        for(char c : t)
        {
         mp[c]++;
        }

        string ans = "";
        int minLength = INT_MAX;

        

        

        for(int i=0;i<s.size();i++)
        {
          if(mp.find(s[i]) != mp.end())
          {
            int notFoundAll = true;

           int start = i;
           string res = "";
           while(notFoundAll && start < s.size())
           {
            if(mp.find(s[start]) != mp.end())
            {
                mp[s[start]]--;
            }
            res += s[start];
            notFoundAll = checkNotAllFound(mp);

             start++;
           }

           if(notFoundAll == false)
           {
            if(res.size() <= minLength)
            {
                ans = res;
                minLength = res.size();
            }
           }
           reset(mp, t);

          }
        }
        return ans;
        
    }
};
