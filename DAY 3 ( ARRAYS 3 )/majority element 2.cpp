// https://leetcode.com/problems/majority-element-ii/description/

class Solution {
public:
    vector<int> majorityElement(vector<int>&a) {
        map<int,int>m;
        vector<int>v;
        for(auto i:a) m[i]++;
        for(auto i:a)
        {
            if(m[i]>(a.size()/3))
            {
                v.push_back(i);
                m[i]=0;
            }
        }
        return v;

        
    }
};