class Solution {
public:

    string encode(vector<string>& strs) {

        if(strs.size() == 0)
        {
            return "#";
        }

        string p = "";
        for(int i=0;i<strs.size();i++)
        {
            if(i == strs.size()-1)
            {
                p += strs[i];
            }
            else
            {
                p += strs[i] + '/';
            }
            
        }

        return p;

    }

    vector<string> decode(string s) {

        vector<string> t;

        if(s == "#")
        {
            return t;
        }

        if(s == "")
        {
            t.push_back("");
            return t;
        }

        stringstream ss(s);
        string token;
        

        while(getline(ss,token,'/'))
        {
            t.push_back(token);
        }

        return t;



    }
};
