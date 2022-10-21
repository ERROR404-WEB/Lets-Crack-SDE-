// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& a) {
        int i,j,minn=INT_MAX,maxx=INT_MIN,n=a.size();
        
        for(i=0;i<n;i++)
        {
            if(a[i]<minn)
            {
                minn=a[i];
            }
            maxx=max(a[i]-minn,maxx);
        }
        return maxx;
        
    }
};