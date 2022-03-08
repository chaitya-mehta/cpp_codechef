#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,x1,y1;
        cin>>x>>y>>x1>>y1;
        int a,b;
        a=x1/x;
        b=y1/y;
        cout<<a+b<<endl;
    }
	// your code goes here
	return 0;
}