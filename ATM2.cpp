#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]<=k)
            {
                k=k-a[i];
                cout<<1;
            }
            else
            {
                cout<<0;
            }
        }
        cout<<endl;
    }
	// your code goes here
	return 0;
}