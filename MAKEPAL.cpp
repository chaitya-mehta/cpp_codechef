#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,count=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2!=0)
            {
                count++;
            }
        }
        if(count==1 || count==0)
        {
           cout<<0<<endl;
        }
        else
        {
           cout<<count/2<<endl;  
        }
    }
	return 0;
}