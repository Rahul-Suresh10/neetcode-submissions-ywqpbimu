class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        map<string, vector<string>> mp;


        for(auto word : strs)
        {
            string w = word;

            sort(w.begin(), w.end());

            mp[w].push_back(word);
        }

        vector<vector<string>> res;

        for(auto v : mp)
        {
         res.push_back(v.second);
        }


        return res;

  
        
    }
};
