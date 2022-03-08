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
        int a[n],i,max,b;
        b=x;
        max=b;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            x=x+a[i];
            if(max<x)
            {
                max=x;
            }
        }
        cout<<max<<endl;
    }
    // your code goes here
	return 0;
}