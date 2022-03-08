#include <iostream>
 
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   int n;
	   int sum=0;
	    cin>>n;
	    while(n!=0)
	    {
	        int r;
	        r=n%10;
	        sum=sum*10+r;
	        n=n/10;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}