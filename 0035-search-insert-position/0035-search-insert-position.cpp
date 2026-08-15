class Solution {
public:
    int occerence(vector<int>& nums, int target)
    {
        int size = nums.size();
        int s = 0;
        int e = size - 1;
        int mid = s + (e - s)/2;
        while(s <= e)
        {

            if(nums[mid] == target)
            {
                return mid;
                break;
            }

            else if(nums[mid]  > target)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
            mid = s + (e - s)/2;
        }

        return mid;
    }
    int searchInsert(vector<int>& nums, int target) {

        int ans = occerence(nums,target);
        return ans;
        
    }
};