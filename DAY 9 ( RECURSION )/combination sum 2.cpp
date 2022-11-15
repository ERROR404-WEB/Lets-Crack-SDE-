//https://leetcode.com/problems/combination-sum-ii/

class Solution {
public:
    vector<vector<int>>v;
    vector<int>temp;
    void combi(vector<int>&a,int i,int target)
    {
        if(target==0) 
        {
            v.push_back(temp);
            return;
        }
        for(int j=i;j<a.size();j++)
        {
            if(j!=i and a[j-1]==a[j]) continue;
            if(a[j]>target) break;
            temp.push_back(a[j]);
            combi(a,j+1,target-a[j]);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(),candidates.end());
        combi(candidates,0,target);
     
       
        return v;
    }


    Solution()
    {
        ios_base::sync_with_stdio();
        cin.tie(0);
        cout.tie(0);
    }
};