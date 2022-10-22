// https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>&a) {
        map<int,int>m;
        for(auto i:a)
        {
                m[i]++;
                if(m[i]==2) return i;
        }
        return -1;
    }
};