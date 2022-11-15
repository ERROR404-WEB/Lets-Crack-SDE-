// https://leetcode.com/problems/trapping-rain-water/

class Solution {
public:
    int trap(vector<int>& h) {
        
        int i=0,j=0,n=h.size();
        vector<int>l(n),r(n);
        int maxx=h[0];
        l[0]=maxx;
        for(i=1;i<n;i++)
        {
            if(h[i]>maxx)
            {
                maxx=h[i];
            
            }
                l[i]=maxx;
        }
        maxx=h[n-1];
        r[n-1]=maxx;
        
        for(i=n-2;i>=0;i--)
        {
            if(h[i]>maxx)
            {
                maxx=h[i];
            
            }
                r[i]=maxx;
            
        }
        int sum=0;
        for(i=0;i<n;i++)
        {
            sum+=min(l[i],r[i])-h[i];
        }
        return sum;
        
        
        
        
    }
};