#include <bits/stdc++.h>
using namespace std;

int main() {
	
	long long i, j, u, n, k, t, l, r;
    
    cin>>t;
    
    for(u=0; u<t; u++)
    {
        cin>>n;
        cin>>k;
        
        int a[n];
        
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        int f = 0;
        
        for(i=0; i<n; i++)
        {
            f = f + a[i];
            f = f - k;
            
            if(f<0)
            {
                cout<<"NO "<<i+1<<endl;
                break;
            }
        }
        
        if(f>=0)
        {
            cout<<"YES\n";
        }
        
        
    }
	
	return 0;
}
