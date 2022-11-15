// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int i=0,j=0,n=a.size();
        for(i=1;i<n;i++)
        {
            if(a[i]!=a[j])
            {
                j++;
                a[j]=a[i];
            }
        }
        return j+1;
    }
};