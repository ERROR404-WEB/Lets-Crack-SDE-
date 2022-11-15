// https://leetcode.com/problems/max-consecutive-ones/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& a) {
        int i,c=0,maxx=0;
        for(i=0;i<a.size();i++)
        {
           if(a[i]==1 ) c++;
           else{
               maxx=max(maxx,c);
               c=0;
           }
        }
         maxx=max(maxx,c);
        return maxx;
        
    }
};