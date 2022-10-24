// https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        int i;
        vector<int>v(2);
        map<int,int>ma;
        for(i=0;i<n.size();i++)
        {
             int rem=t-n[i];
            
            if(ma[rem])
            {
                v[0]=i;
                v[1]=ma[rem]-1;
                
                if(v[0]>v[1]) swap(v[0],v[1]);
                return v;
            }
            ma[n[i]]=i+1;
            
        }
        
        return v;
    }
};