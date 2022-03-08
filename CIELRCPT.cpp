#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n;
        p=n/2048;
        n=n%2048;
        while(n!=0)
        {
            p=p+n%2;
            n=n/2;
        }
        cout<<p<<endl;
    }
	// your code goes here
	return 0;
}
