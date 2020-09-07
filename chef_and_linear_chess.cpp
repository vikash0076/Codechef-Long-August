#include <iostream>
#include <climits>
using namespace std;

int main() {
	// your code goes here
	int n,t;
	long long int k,i,j,p,q,a[1000],ans;
	cin>>t;
	q=INT_MAX;
	for(j=0;j<t;j++)
	{
	    cin>>n>>k;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        if(k%a[i]==0)
	        {
	            p=k/a[i];
	            if(p<q)
	            {
	                q=p;
	                ans=a[i];
	            }
	        }
	    }
	    
	    if(q==INT_MAX)
	    {
	        cout<<-1<<"\n";
	    }
	    else
	    {
	        cout<<ans<<"\n";
	    }
	    q=INT_MAX;
	}
	
	return 0;
}
