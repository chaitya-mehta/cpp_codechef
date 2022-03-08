#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int cnt=0,n;
	    cin>>n;
	while(n!=0)
	{
	    
	    if(n%10==4)
	    {
	       cnt++; 
	    }
	    n=n/10;
	}
	cout<<cnt<<endl;
	}   
	return 0;
}
