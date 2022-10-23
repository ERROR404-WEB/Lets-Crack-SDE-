// https://leetcode.com/problems/unique-paths/

class Solution {
public:
    int uniquePaths(int n, int m) {
        vector<vector<int>>v(n,vector<int>(m,1));
        int i,j,sum=0;
        for(i=1;i<n;i++)
        {
            for(j=1;j<m;j++)
            {
                v[i][j]=v[i-1][j]+v[i][j-1];
            }
        }
        return v[n-1][m-1];
    }
};