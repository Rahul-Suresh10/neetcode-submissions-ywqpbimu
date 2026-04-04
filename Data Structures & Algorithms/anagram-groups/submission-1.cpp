class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

      map<string, vector<string>> mp;

      for(string s : strs)
      {
         string g = s;
         sort(g.begin(), g.end());
         mp[g].push_back(s);
      }

      vector<vector<string>> res;

      for(auto m : mp)
      {
        res.push_back(m.second);
      }

      return res;
        
    }
};
