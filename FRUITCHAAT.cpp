#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int a,b;
        b=x/2;
        a=y-b;
        if(y>=x/2)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<y<<endl;
        }
    }
	// your code goes here
	return 0;
}