// https://www.codingninjas.com/codestudio/problems/873366?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

#include <bits/stdc++.h> 
#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &a, int n)
{
	map<int,int>m;
    int a1=0,a2=0;
    for(int i=0;i<n;i++) m[a[i]]++;
    for(int i=1;i<=n;i++) 
    {
        if(m[i]==2) a1=i;
        if(!m[i]) a2=i;
        if(a1 and a2) return {a2,a1};
    }
    return {a2,a1};
	
}
