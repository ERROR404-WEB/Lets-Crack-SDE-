 
 //subset sum 
 //https://practice.geeksforgeeks.org/problems/subset-sums2234/1
 
 vector<int> subsetSums(vector<int> a, int n)
    {
        int i,j;
        vector<int>v;
        for(i=1;i<=pow(2,n);i++)
        {
            int sum=0;
            for(j=0;j<n;j++)
            {
                if(i&(1<<j)) sum+=a[j];
            }
            v.push_back(sum);
        }
        return v;
    }

vector<int>v,temp;
     int sum=0;
     void combi(vector<int>&a,int i)
     {
         if(i>=a.size())
         {
            sum=0;
            for(auto i:temp) sum+=i;
            v.push_back(sum);
            return ;
         }
         temp.push_back(a[i]);
         combi(a,i+1);
         temp.pop_back();
         combi(a,i+1);
     }
    
    
    vector<int> subsetSums(vector<int> a, int n)
    {
       
        combi(a,0);
        return v;
    }