#include <bits/stdc++.h>
using namespace std;

int main() {
	
	
	long i, j, k, t, n, m, u, q;
	
	cin>>t;
	
	for(u=0; u<t; u++)
	{
	    
	    cin>>n;
	    cin>>m;
	    cin>>q;
	    
	    map<long, long> mx;
	    map<long, long> my;
	    
	    long o = 0;
	    long e = 0;
	    long o2 = 0;
	    long e2 = 0;
	    
	    for(i=0; i<q; i++)
	    {
	        long x, y;
	        cin>>x;
	        cin>>y;
	        
	        long a, b;
	        
	        a = ++mx[x];
	        b = ++my[y];
	        
	        
	        if(a%2==0)
	        {
	            o--;
	            e++;
	        }
	        else
	        {
	            if(a==1)
	            {
	                o++;
	            }
	            else
	            {
	                o++;
	                e--;
	            }
	        }
	        
	        if(b%2==0)
	        {
	            o2--;
	            e2++;
	        }
	        else
	        {
	            if(b==1)
	            {
	                o2++;
	            }
	            else
	            {
	                o2++;
	                e2--;
	            }
	        }
	        
	        
	    }
	    
	    
	    long ans = o*e2 + e*o2 + (n-o-e)*o2 + (m-o2-e2)*o;
	    
	    cout<<ans<<"\n";
	   
	    
	}
	
	
	
	
	return 0;
}
