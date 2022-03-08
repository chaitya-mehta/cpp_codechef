#include <iostream>
using namespace std;

int main() 
{
	int t,n;
	cin>>t;
//	cin>>n;
	while(t--)
	{
	    cin>>n;
	    if(n%4==0)
	    {
	        cout<<"no"<<endl;
	    }
	    else if(n%4==2)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        cout<<"yes"<<endl;
	    }
	}
	return 0;
}