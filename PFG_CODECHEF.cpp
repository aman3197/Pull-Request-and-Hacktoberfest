#include <bits/stdc++.h>
using namespace std;

int main() {
	
	
	long i, j, k, t, n, m, u, q;
	
	cin>>t;
	
	for(u=0; u<t; u++)
	{
	    
	   cin>>n;
	   
	   long arr[n];
	   
	   for(i=0; i<n; i++)
	   {
	       cin>>arr[i];
	   }
	   
	   long mxf = 0;
	   
	   //for(i=0; i<n; i++)
	   //{
	   //    long temp = 0;
	   //    for(j=0; j<i; j++)
	   //    {
	   //        if(arr[j]%arr[i]==0)
	   //        {
	   //            temp++;
	   //        }
	   //    }
	       
	   //    mxf = max(mxf, temp);
	   //}
	   
	   map<long, long> ms;
	   
	   for(i=0; i<n; i++)
	   {
	       long temp = 0;
	       
	       temp = ms[arr[i]];
	       mxf = max(temp, mxf);
	       
	       for(j=1; j<=sqrt(arr[i]); j++)
	       {
	           if(arr[i]%j==0)
	           {
	               if(arr[i]/j == j)
	               {
	                   ms[j]++;
	               }
	               else
	               {
	                   ms[j]++;
	                   ms[arr[i]/j]++;
	               }
	           }
	       }
	   }
	   
	   
	   cout<<mxf<<"\n";
	   
	    
	}
	
	
	
	
	return 0;
}
