class Solution {
public:
    int lengthOfLastWord(string s) {

        int m = 0;
        int n = s.length()-1;

        while(s[m] == ' ' || s[n] == ' ')
        {
            if(s[m] == ' ')
            {
                m++;
            }
            if(s[n] == ' ')
            {
                n--;
            }
        }


        string  newStrings = "";
        for(int k = m;k<=n;k++)
        {
            newStrings += s[k];
        }
        string newString = "";


        for(int i=0;i< newStrings.length();i++)
        {
            if(newStrings[i-1] == ' ' && newStrings[i] == ' ')
            {
                continue; 
            }
            newString += newStrings[i]; 
        }


        stringstream ss(newString);
        string target;

        vector<string> vt;


        while(getline(ss, target, ' '))
        {
          vt.push_back(target);
        }

        return vt[vt.size()-1].length();


        
    }
};