#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long x,y;
		cin>>x>>y;
		//y=y*2;
		if(x%2==0 && y%2==0)
		{
			cout<<"YES"<<endl;
		}
		else if(x==0 && y%2!=0)
		{
			cout<<"NO"<<endl;
		}
		else if((x+2*y)%2==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}