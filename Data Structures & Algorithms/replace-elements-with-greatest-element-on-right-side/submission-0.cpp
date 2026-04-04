class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        int n = arr.size();

        vector<int> res(n, 0);

        int greatestElement = -1;

        res[n-1] = -1;
        greatestElement = arr[n-1];
 
        for(int i = n-2;i>=0;i--)
        {
           res[i] = greatestElement;
           if(arr[i] > greatestElement)
           {
            greatestElement = arr[i];
           }
            
        }

        return res;
        
    }
};