
// https://leetcode.com/problems/search-a-2d-matrix/description/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int t) {
        int i,j,n=a.size(),m=a[0].size();
        for(i=0;i<n;i++)
        {
            if(t>=a[i][0] and t<=a[i][m-1])
            {
                int low=0,mid,high=m-1;
                while(low<=high)
                {
                    mid=(low+high)/2;
                    if(a[i][mid]>t) high=mid-1;
                    else if(a[i][mid]<t) low=mid+1;
                    else return true;
                }

                break;
            }
        }
        return false;
    }
};