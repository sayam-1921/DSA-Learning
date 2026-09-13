class Solution {
public:
    double myPow(double x, int n) {
        long long bf = n;
        double ans = 1;

        if(n == 0)
        {
            return 1;
        }
        
        if(x == 0)
        {
            return 0;
        }

        if(x == 1)
        {
            return 1;
        }

        if(n == 1)
        {
            return x;
        }

        if(x == -1 && n % 2 == 0)
        {
            return 1;
        }

        if(x == -1 && n % 2 != 0)
        {
            return x;
        }



        if(bf < 0)
        {
            x = 1 / x;
            bf = -bf;
        }

        while(bf > 0)
        {
            int bit = bf % 2;
            if(bit == 1)
            {
                ans = ans * x;
            }

            x = x * x;
            bf = bf / 2;
        }
        
        return ans;
    }
};