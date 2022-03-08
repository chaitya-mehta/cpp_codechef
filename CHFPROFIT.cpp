#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int a,b;
        a=x*y;
        b=x*z;
        cout<<b-a<<endl;
    }
	// your code goes here
	return 0;
}
