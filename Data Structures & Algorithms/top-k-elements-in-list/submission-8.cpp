class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        map<int,int> mp;
        vector<int> res;

        for(int i=0;i<nums.size();i++)
        {  
            mp[nums[i]]++;   
        }

        vector<int> temp1;
        vector<int> temp2;

        for(auto & p : mp)
        {
            temp1.push_back(p.first);
            temp2.push_back(p.second);
        }

        for(int i=0;i<temp2.size();i++)
        {
            for(int j= 0;j<temp2.size()-1;j++)
            {
                 if(temp2[j] > temp2[j+1])
                 {
                    int temp = temp2[j];
                    temp2[j] = temp2[j+1];
                    temp2[j+1] = temp;

                    int t = temp1[j];
                    temp1[j] = temp1[j+1];
                    temp1[j+1] = t;
                 }
            }
        }

      

        for(int i=temp1.size()-1;i>=0;i--)
        {
           
            res.push_back(temp1[i]);
            k--;
            if(k==0)
            {
                break;
            }
        }
        return res;
        
    }
};

