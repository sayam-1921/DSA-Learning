class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maxcount = 0;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            int c = 1;
            bool alreadycount = false;
            for(int p = 0; p < i; p++)
            {
                if(nums[i] == nums[p])
                {
                    alreadycount = true;
                    break;
                }

            }
            if(alreadycount)
            {
                 continue;
            }

            for(int j = 0; j < n; j++)
            {
                if(nums[i] == nums[j] && i != j)
                {
                    c++;
                }

               
            }
            if(c > maxcount)
            {
                maxcount = c;
                ans = nums[i];

            }
        }
        return ans;
    }
};