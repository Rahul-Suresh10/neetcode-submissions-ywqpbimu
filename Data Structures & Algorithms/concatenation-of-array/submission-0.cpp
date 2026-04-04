class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        vector<int> vt = nums;

        for(auto c : nums)
        {
            vt.push_back(c);
        }

        return vt;
        
    }
};