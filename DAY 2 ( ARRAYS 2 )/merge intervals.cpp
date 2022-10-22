// https://leetcode.com/problems/merge-intervals/description/


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
       
        vector<vector<int>>vv;
       sort(a.begin(),a.end());
        int i,j,start=a[0][0],end=a[0][1];
        for(i=1;i<a.size();i++)
        {
            vector<int>v;

           if(a[i][0]>end)
           {
               v.push_back(start);
               v.push_back(end);
               start=a[i][0];
               end=a[i][1];
                vv.push_back(v);
           }
           else if(a[i][1]>end)
            {
                end=a[i][1];
            }
          
        }
        vv.push_back({start,end});
        

        return vv;

    }
};