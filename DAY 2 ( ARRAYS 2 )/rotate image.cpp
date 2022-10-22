// https://leetcode.com/problems/rotate-image/


class Solution {
public:
    void rotate(vector<vector<int>>&a) {
        reverse(a.begin(),a.end());
        int i,j;
        for(i=0;i<a.size();i++)
        {
            for(j=i+1;j<a[i].size();j++)
            swap(a[i][j],a[j][i]);
        }
    }
};