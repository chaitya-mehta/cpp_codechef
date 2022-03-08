#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],s=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s=s+a[i];
        }
        if(s%2==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
	// your code goes here
	return 0;
}
