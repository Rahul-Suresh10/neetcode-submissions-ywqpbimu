class Solution {
public:
    bool isAnagram(string s, string t) {

        map<char, int> mp;

        if(s.size() != t.size())
        {
            return false;
        }

        for(char m : s)
        {
          
            mp[m]++;
            
        }

        for(char m : t)
        {
            if(mp.find(m) != mp.end())
            {
                mp[m]--;
            }
            else
            {
                mp[m]++;
            }
        }

        for(auto & m : mp)
        {
            if(m.second != 0)
            {
                return false;
            }
        }

        return true;
        
    }
};
