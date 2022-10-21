// https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>dp;
        int i,j;
        for(i=0;i<n;i++)
        {
            vector<int>v(i+1,1);
    
            for(j=1;j<i;j++)
            {
                v[j]=dp[i-1][j]+dp[i-1][j-1];
            }
            
           dp.push_back(v);
        }
        return dp;
        
    }
};