#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d,sum1=0,sum2=0;
		cin>>a>>b>>c>>d;
		if(a==c && b==d)
		{
			cout<<"0"<<endl;
		}
		else
		{
			sum1=a+b;
			sum2=c+d;
			if(sum1%2==0 && sum2%2==0)
			{
				cout<<"2"<<endl;
			}
			else if(sum1%2!=0 && sum2%2!=0)
			{
				cout<<"2"<<endl;
			}
			else
			{
				cout<<"1"<<endl;
			}
		}
	}
	return 0;
}