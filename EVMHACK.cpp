#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,p,q,r,s,x,y,z,w;
        cin>>a>>b>>c>>p>>q>>r;
        s=(p+q+r)/2;
        x=b+c+p;
        y=a+c+q;
        z=a+b+r;
        w=max(x,max(y,z));
        if(w>s)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
	// your code goes here
	return 0;
}
