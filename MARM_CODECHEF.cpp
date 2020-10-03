#include <bits/stdc++.h>
using namespace std;

int main() {
	
	
	long long i, j, k, t, n, u;
	
	cin>>t;
	
	for(u=0; u<t; u++)
	{
	    cin>>n;
	    cin>>k;
	    
	    long long arr[n];
	    
	    for(i=0; i<n; i++)
	    {
	        cin>>arr[i];
	    }
	    
	    
	    long long m = k/n; 
	    long long temp[n];
	    long long nk = k;
	    
        for(i=0; i<n; i++)
        {
            temp[i] = arr[i];
        }
	    
	    if(m%3==0)
	    {
	        k = k%n;
	        
	        for(i=0; i<k; i++)
	        {
	            temp[i] = temp[i]^temp[n-i-1];
	        }
	        
	       // for(i=k; i<n; i++)
	       // {
	       //     temp[i] = arr[i];
	       // }
	        
	    //    long long temp[n];
	        
	       // for(i=0; i<k && i<n/2; i++)
	       // {
	       //     temp[i] = arr[i]^arr[n-i-1];
	       // }
	        
	       // for(; i<k; i++)
	       // {
	       //     temp[i] = arr[n-i-1];
	       // }
	        
	       // for(; i<n/2; i++)
	       // {
	       //     temp[i] = arr[i];
	       // }
	        
	       // for(; i<n; i++)
	       // {
	       //     temp[i] = arr[i];
	       // }
	        
	    }
	    else if(m%3==1)
	    {
	        k = k%n;
	        
	        for(i=0; i<n; i++)
	        {
	            temp[i] = temp[i]^temp[n-i-1];
	        }
	        
	        for(i=0; i<k; i++)
	        {
	            temp[i] = temp[i]^temp[n-i-1];
	        }
	        
	      //  long long temp[n];
	        
	       // for(i=0; i<k && i<n/2; i++)
	       // {
	       //     temp[i] = arr[n-i-1];
	       // }
	        
	       // for(; i<k; i++)
	       // {
	       //     temp[i] = arr[n-i-1];
	       // }
	        
	       // for(; i<n/2; i++)
	       // {
	       //     temp[i] = arr[i]^arr[n-i-1];
	       // }
	        
	       // for(; i<n; i++)
	       // {
	       //     temp[i] = arr[n-i-1];
	       // }
	        
	    }
	    else if(m%3==2)
	    {
	        k = k%n;
	        
	        for(i=0; i<n; i++)
	        {
	            temp[i] = temp[i]^temp[n-i-1];
	        }
	        
	        for(i=0; i<n; i++)
	        {
	            temp[i] = temp[i]^temp[n-i-1];
	        }
	        
	        for(i=0; i<k; i++)
	        {
	            temp[i] = temp[i]^temp[n-i-1];
	        }
	        
	  //      long long temp[n];
	        
	       // for(i=0; i<k && i<n/2; i++)
	       // {
	       //     temp[i] = arr[i];
	       // }
	        
	       // for(; i<k; i++)
	       // {
	       //     temp[i] = arr[i];
	       // }
	        
	       // for(; i<n/2; i++)
	       // {
	       //     temp[i] = arr[n-i-1];
	       // }
	        
	       // for(; i<n; i++)
	       // {
	       //     temp[i] = arr[i]^arr[n-i-1];
	       // }
	        
	    }
	    
	    if(n%2==1)
	    {
	        if(nk>n/2)
	        {
	            temp[n/2] = 0;
	        }
	    }
	    
	    
	    for(i=0; i<n; i++)
	    {
	        cout<<temp[i]<<" ";
	    }
	    
	    cout<<"\n";
	    
	}
	
	
	
	
	return 0;
}
