// https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i,m[3]={0};
        for(i=0;i<nums.size();i++) m[nums[i]]++;
        i=0;
        while(m[0]--) nums[i++]=0;
        while(m[1]--) nums[i++]=1;
        while(m[2]--) nums[i++]=2;
    }
};
