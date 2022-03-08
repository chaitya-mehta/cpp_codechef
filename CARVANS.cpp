#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,cnt=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int max=a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]<=max)
            {
                cnt++;
                max=a[i];
            }
        }
        cout<<cnt+1<<endl;
    }
	// your code goes here
	return 0;
}
