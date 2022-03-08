#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long a[n],i,flag=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=1;i<n;i++)
		{
			if(i>=0 && a[i-1]%a[i]!=0)
			{
				flag=1;
			}
		}
		if(flag==0)
		{
			for(i=0;i<n;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		else
		{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}