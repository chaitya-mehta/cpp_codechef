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
        int a;
        a=2*y;
        if(x>=a)
        {
            cout<<x/a<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
	// your code goes here
	return 0;
}
