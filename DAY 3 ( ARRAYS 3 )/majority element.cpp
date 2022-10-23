// https://leetcode.com/problems/majority-element/description/
class Solution {
public:
    int majorityElement(vector<int>&a) {
        map<int,int>m;
        for(auto i:a) m[i]++;
        for(auto i:m) if(i.second>(a.size()/2)) return i.first;
        return 0;
    }
};