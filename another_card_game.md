#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,r,c,x,i,countc=0,countr=0,remc,remr;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>c>>r;
	    if(c<10)
	    {
	        countc=1;
	    }
	    else
	    {
	        x=9;
	        remc=c%x;
	        countc=c/x;
	        if(remc!=0)
	        {
	            countc++;
	        }
	    }
	    
	    if(r<10)
	    {
	        countr=1;
	    }
	     else
	    {
	        x=9;
	        remr=r%x;
	        countr=r/x;
	        if(remr!=0)
	        {
	            countr++;
	        }
	    }
	    
	    if(countc>countr)
	    {
	        cout<<1<<" "<<countr<<"\n";
	    }
	    else if(countc==countr)
	    {
	        cout<<1<<" "<<countr<<"\n";
	    }
	    else
	    {
	        cout<<0<<" "<<countc<<"\n";
	    }
	    x=9;
	    countc=0;
	    countr=0;
	    
	}
	
	
	return 0;
}
