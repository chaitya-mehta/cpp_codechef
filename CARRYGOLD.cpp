#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,N;
        cin>>n>>x>>y;
        N=n+1;
        if((N*y)>=x)
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
