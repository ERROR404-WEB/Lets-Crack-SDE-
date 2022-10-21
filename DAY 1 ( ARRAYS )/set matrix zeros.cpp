//  https://leetcode.com/problems/set-matrix-zeroes/

class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        map<int,int>r,c;
        int i,j;
        for(i=0;i<m.size();i++)
        {
            for(j=0;j<m[i].size();j++)
            {
                if(m[i][j]==0)
                {
                    r[i]++;
                    c[j]++;
                }
            }
        }

        for(i=0;i<m.size();i++)
        {
            for(j=0;j<m[i].size();j++)
            {
                if(r[i] or c[j])
                m[i][j]=0;
            }
        }

    }
};