class Solution {
public:
   map<string, string> mp = {
    {"2" , "abc"},
    {"3" , "def"},
    {"4" , "ghi"},
    {"5" , "jkl"},
    {"6" , "mno"},
    {"7" , "pqrs"},
    {"8" , "tuv"},
    {"9" , "wxyz"}
   };


    void sol(int i, string digits, string nums, vector<string>& res)
    {
        if(i == digits.size())
        {
            if(nums == "")
            {
                return;
            }
            res.push_back(nums);
            return;
        }

        string digit = string() + digits[i];

        string req = mp[digit];

        for(char c : req)
        {
            string letter = string() + c;
            sol(i+1,digits,nums+letter,res);
        }

    }

    vector<string> letterCombinations(string digits) {

        vector<string> res;
        string nums = "";
        sol(0, digits,nums,res);
        return res;
        
    }
};
