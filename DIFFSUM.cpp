#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N1,N2,ans;
	cin>>N1>>N2;
	if(N1>N2)
	{
	    ans=N1-N2;
	}
	else
	{
	    ans=N1+N2;
	}
	cout<<ans<<endl;
	return 0;
}