#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,x,y;
        cin>>n>>a>>b;
        x=a+b;
        y=2*(180+n);
        cout<<y-x<<endl;
    }
	// your code goes here
	return 0;
}
