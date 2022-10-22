// https://www.codingninjas.com/codestudio/problems/count-inversions_615?leftPanelTab=0

#include <bits/stdc++.h> 
long long getInversions(long long *a, int n){
    long long int i,j,count=0;
    map<long long,long long>m;
   
    for(i=0;i<n;i++)
    {
        for(auto it:m)
        {
            if(it.first>a[i])
                count+=it.second;
        }
        m[a[i]]++;
    }
    return count;
}