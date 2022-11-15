//subset 2
//https://leetcode.com/problems/subsets-ii/

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& a) {
        vector<vector<int>>v;
        map<vector<int>,int>m;
        int i,j,n=a.size();
        for(i=0;i<pow(2,n);i++)
        {
              vector<int>b;
              for(j=0;j<n;j++)
              {
                  if(i&(1<<j))b.push_back(a[j]);
              }
              sort(b.begin(),b.end());
              m[b]++;
        }
        for(auto i:m)
        {
            v.push_back(i.first);
        }
        return v;
        
    }
};

class Solution {
public:
    vector<vector<int>>v;
    vector<int>temp;
    void combi(vector<int>&a,int i)
    {
        v.push_back(temp);
        for(int j=i;j<a.size();j++)
        {
            if(j!=i and a[j-1]==a[j]) continue;
            temp.push_back(a[j]);
            combi(a,j+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& a) {
        sort(a.begin(),a.end());
        combi(a,0);
        return v;
    }
};