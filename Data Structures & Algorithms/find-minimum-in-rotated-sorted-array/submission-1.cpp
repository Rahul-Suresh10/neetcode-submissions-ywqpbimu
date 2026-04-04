class Solution {
public:
    int findMin(vector<int> &nums) {


        int i = 0;
        int j = nums.size()-1;
        int minValue = INT_MAX;

        while(i <= j)
        {
            int mid = (i + j) / 2;
 
            if(nums[i] <= nums[j])
            {
                minValue = min(nums[i],minValue);
            }

            if(nums[i] <= nums[mid])
            {
                minValue = min(nums[i], minValue);
                i = mid + 1;
            }
            else
            {
                minValue = min(nums[mid], minValue);
                j = mid - 1;
            }
        }
        return minValue;
    }
};
