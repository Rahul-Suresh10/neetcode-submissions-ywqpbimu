class Solution {
public:
    bool isPalindrome(string s) {

     
        string b= "";

        for(int i=0;i<s.length();i++)
        {
            if(s[i] >= 'A' && s[i] <+ 'Z')
            {
                s[i] += 32;
                b += s[i];
            }
            else if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
            {
                b += s[i];
            }
         
        }

        int i = 0;
        int j = b.length()-1;

        while(i<j)
        {
            if(b[i] != b[j])
            {
                return false;
            }
            i++;
            j--;
        }

        return true;
        
    }
};
