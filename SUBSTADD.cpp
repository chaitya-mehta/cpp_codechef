#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,i;
        int cnt=0;
        cin>>n>>x>>y;
        int a[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(i=0;i<n;i++)
        {
        if(b[i]-a[i]!=x && b[i]-a[i]!=y)
        {
            cnt=1;
            break;
        }
        }
        if(cnt==1)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
	// your code goes here
	return 0;
}