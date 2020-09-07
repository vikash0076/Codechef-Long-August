#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t,i,j,x=0;
	float p,h;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>h>>p;
        while(p>0)
        {
            h=h-p;
            p=p/2;
            if(p>h)
            {
                cout<<1<<"\n";
                x=1;
                break;
            }
        }
        if(x!=1)
        {
            cout<<0<<"\n";
        }
        x=0;
    }
	return 0;
}
