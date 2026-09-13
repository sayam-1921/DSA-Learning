class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)
        {
            return 0;
        }

        int i = 0;
        int j = 1;

        while(i < n - 1)
        {
            if(nums[i] == nums[i+1])
            {
                i++;
            }

            else{
                nums[j] = nums[i+1];
                j++;
                i++;
            }
        } 
        
        return j;
    }
};