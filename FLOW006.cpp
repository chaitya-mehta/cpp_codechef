#include<iostream>
using namespace std;

int main()
{
   int t,n,a;
   cin>>t;
   while(t--)
   {
   	int sum=0;
   	cin >>n;
   	//cout << n<< endl;
   	//sum=sum+(n/10);
   	while(n>0)
   	{
   	a=n%10;
   	sum=sum+a;
   	n=n/10;
	}
   	cout<<sum<<endl;
   	}
	return 0;
}