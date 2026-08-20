class Solution {
public:
int sqrt(int x)
{
    int s = 0;
    int e = x;
    int ans;

    while(s <= e)
    {
        long long mid = s + (e - s) / 2;
        if((mid * mid) == x)
        {
            ans = mid;
            return ans;
        }

        else if((mid * mid) < x)
        {
            ans = mid;
            s = mid + 1; 
        }

        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
    int mySqrt(int x) {
        int squareroot = sqrt(x);
        return squareroot;  
    }
};