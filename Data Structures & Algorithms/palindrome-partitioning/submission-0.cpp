class Solution {
public:
    bool checkPalindrome(string s)
    {
        int m = 0;
        int n = s.size()-1;
        while(m<n)
        {
            if(s[m] != s[n])
            {
                return false;
            }
            m++;
            n--;
        }
        return true;
    }


    void sol(int index, string& s, vector<string>& temp, vector<vector<string>>& res)
    {
        if(index == s.size())
        {
            res.push_back(temp);
            return;
        }


        for(int i = index;i<s.size();i++)
        {
            string n = s.substr(index, i-index+1);
            if(checkPalindrome(n))
            {
                temp.push_back(n);
                sol(i+1, s, temp,res);
                temp.pop_back();
            }
        }

    }


    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;

        vector<string> temp;

        sol(0,s,temp,res);
        return res;
        
    }
};
