#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,a,ans;
        cin>>x>>y;
        a=x-y;
        if(y==0)
        {
           ans=x;
           cout<<ans<<endl;
        }
        else if(x==y)
        {
            ans=((y*2)-1);
            cout<<ans<<endl;
        }
        else if(x>=y)
        {
            ans=a+(2*y);
            cout<<ans<<endl;
        }
        else
        {
            ans=0;
            cout<<ans<<endl;
        }
    }
	// your code goes here
	return 0;
}