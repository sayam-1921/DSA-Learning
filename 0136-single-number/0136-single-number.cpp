class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int n = nums.size();
        int XoR = 0;

        for(int i = 0; i < n; i++)
        {
            XoR = XoR ^ nums[i];
        }
        return XoR;
    }
};