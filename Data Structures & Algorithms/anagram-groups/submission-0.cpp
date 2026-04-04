class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> res;

        map<string, vector<string>> mp;

        vector<string> temp = strs;

        for(int i=0;i<temp.size();i++)
        {
            sort(temp[i].begin(),temp[i].end());
            mp[temp[i]].emplace_back(strs[i]);
        }

        for(auto & m : mp)
        {
            res.emplace_back(m.second);
        }

        return res;


        
        
    }
};
