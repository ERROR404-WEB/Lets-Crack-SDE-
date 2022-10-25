// https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int i,j,sum=0,maxx=INT_MIN;
        for(auto it:nums)
        {
            if(sum<0) sum=0;
            
            sum+=it;
            
            maxx=max(sum,maxx);
        }
        return maxx;
    }
};