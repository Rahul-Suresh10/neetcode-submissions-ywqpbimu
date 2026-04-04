class Solution {
public:

    string encode(vector<string>& strs) {

        if(strs.size() == 0)
        {
            return "#";
        }
        
        string sentence="";
        int count = strs.size();
        for(auto s : strs)
        {
            count--;
            if(count == 0)
            {
                sentence = sentence + s;
            }
            else
            {
                sentence = sentence + s + "/";
            }
           

        }
        return sentence;

    }

    vector<string> decode(string s) {
        vector<string> vt;

        if(s == "#")
        {
            return vt;
        }

        if(s == "")
        {
            vt.push_back("");
            return vt;
        }

        stringstream ss(s);
        string token;
       

        while(getline(ss, token, '/'))
        {
          vt.push_back(token);
        }

        return vt;

    }
};
