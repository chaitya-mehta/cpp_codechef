#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b)
        {
            if(b>c)
            {
                cout<<b<<endl;
            }
            else if(b<c && a>c)
            {
                cout<<c<<endl;
            }
            else if(c>a)
            {
                cout<<a<<endl;
            }
        }
        else if(b>a)
        {
            if(a>c)
            {
                cout<<a<<endl;
            }
            else if(c>b)
            {
                cout<<b<<endl;
            }
            else if(a<c && b>c)
            {
                cout<<c<<endl;
            }
        }
    }
	// your code goes here
	return 0;
}
