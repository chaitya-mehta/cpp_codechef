#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s=0,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        int s1=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]<s1)
            {
                s1=a[i];
            }
        }
        cout<<s-s1<<endl;
    }
	// your code goes here
	return 0;
}
