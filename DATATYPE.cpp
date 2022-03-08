#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a;
        a=x/n;
        if(x<=n)
        {
            cout<<x<<endl;
        }
        else 
        {
            while(x>n)
            {
                x=(x-n-1);    
            }
            cout<<x<<endl;
        }
    }
	// your code goes here
	return 0;
}
