#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int d,n,sum=0;
	    cin>>d>>n;
	    for(int i=1;i<=d;i++)
	    {
	        sum=sum+n*(n+1)/2;
	        n=sum;
	        sum=0;
	    }
	    cout<<n<<endl;
	}
	// your code goes here
	return 0;
}
