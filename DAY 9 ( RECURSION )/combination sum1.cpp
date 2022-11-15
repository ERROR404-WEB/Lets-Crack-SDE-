//combinantion sum 1
//https://leetcode.com/problems/combination-sum/

class Solution {
public:
    vector<vector<int>>v;
    vector<int>temp;
    void combi(vector<int>&a,int n,int i, int t)
    {
      if(t==0)
      {
          v.push_back(temp);
          return;
      }
      if(i>=n or t<0) return ;

      temp.push_back(a[i]);
      combi(a,n,i,t-a[i]);
      temp.pop_back();
      combi(a,n,i+1,t);
    }
    vector<vector<int>> combinationSum(vector<int>& a, int t) {

        combi(a,a.size(),0,t);
        return v;
        
    }
};