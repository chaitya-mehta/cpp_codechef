#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,x1,y1,d;
        cin>>x>>y>>x1>>y1>>d;
        int a,b;
        a=x/x1;
        b=y/y1;
        int c;
        c=min(a,b);
        if(c>=d)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
	// your code goes here
	return 0;
}