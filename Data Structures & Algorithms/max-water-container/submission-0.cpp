class Solution {
public:
    int maxArea(vector<int>& heights) {

        int maxValue = INT_MIN;

        int i = 0;
        int j = heights.size()-1;

        while(i < j)
        {
            long area;
            if(heights[i] >= heights[j])
            {
                area = heights[j] * (j-i);
                j--;
            }
            else
            {
                area = heights[i] * (j-i);
                i++;
            }

            if(area > maxValue)
            {
                maxValue = area;
            }


        }

        return maxValue;
        
    }
};
