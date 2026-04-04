class Solution {
public:
    int characterReplacement(string s, int k) {

        map<int,int> mp;
        int max_freq = 0;
        int max_length = 0;
        int l = 0;

        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
            if(mp[s[i]] > max_freq)
            {
                max_freq = mp[s[i]];
            }
            int len = i-l+1;
            while((i-l+1) - max_freq > k)
            {
               mp[s[l]]--;
               if(mp[s[l]]==0)
               {
                mp.erase(s[l]);
               }
               l++;
            } 
            max_length = max(max_length,i-l+1);
        }
        
        return max_length;
    }
};
