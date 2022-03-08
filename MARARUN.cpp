#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int D,d,a,b,c;
        cin>>D>>d>>a>>b>>c;
        int x;
        x=D*d;
        if(x<10)
        {
            cout<<0<<endl;
        }
        else if(x>=10 && x<21)
        {
            cout<<a<<endl;
        }
        else if(x>=21 && x<42)
        {
            cout<<b<<endl;
        }
        else 
        {
            cout<<c<<endl;
        }
    }
	// your code goes here
	return 0;
}
