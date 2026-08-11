class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         int n = nums1.size();
         int m = nums2.size();
         vector<int> N1_N2;
        
         vector<int> N1_U_N2 ;
         int s = 0;
         for(int i = 0; i < n; i++)
         {
            for(int j = 0; j < m; j++)
            {
                if(nums1[i] == nums2[j])
                {
                    N1_N2.push_back(nums1[i]);
                    nums2[j] = -9;
                }
            }
         }
         int a = N1_N2.size();

         for(int i = 0; i < a; i++)
         {
            bool alreadycount = false;
            for(int p = 0; p < i; p++)
            {
                if(N1_N2[i] == N1_N2[p])
                {
                    alreadycount = true;
                    break;
                }
            }
            if(alreadycount)
            {
                continue;
            }    
            N1_U_N2.push_back(N1_N2[i]);
         }
         return N1_U_N2;
         
        
    }
};