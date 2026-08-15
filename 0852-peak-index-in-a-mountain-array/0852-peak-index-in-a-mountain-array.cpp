class Solution {
public:
int peakindex(vector<int>& arr)
{
    int size = arr.size();
    int i = 0;
    while(i < size)
    {
        if(arr[i] < arr[i+1])
        {
           i++;
        }
        else{

            break;
        }
    }
    return i;
}
    int peakIndexInMountainArray(vector<int>& arr) {
        int ans = peakindex(arr);
        return ans;
    }
};