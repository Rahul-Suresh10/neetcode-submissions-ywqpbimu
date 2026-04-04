class Solution {
public:
    int trap(vector<int>& height) {


        vector<int> maxLeft;
        vector<int> maxRight;
        vector<int> minValues;

        int maxL=0;
        int maxR=0;

        for(int i=0;i<height.size();i++)
        {
            maxLeft.push_back(maxL);
            if(height[i] >= maxL)
            {
                maxL = height[i];
            }
            
        }

        for(int i=height.size()-1;i>=0;i--)
        {
            maxRight.push_back(maxR);
            if(height[i] >= maxR)
            {
                maxR = height[i];
            } 
        }


        reverse(maxRight.begin(),maxRight.end());

        for(int i=0;i<height.size();i++)
        {
            minValues.push_back(min(maxLeft[i],maxRight[i]));
        }

        int count =0;
        for(int i=0;i<height.size();i++)
        {
            int sol = minValues[i] - height[i];
            if(sol < 0)
            {
                continue;
            }
            else
            {
                count += sol;
            }
        }

        return count;
    
    }
};
