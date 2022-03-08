#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,cnt=0,cnt1=0;
        int a[7];
        for(i=0;i<7;i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                cnt++;
            }
            else 
            {
                cnt1++;
            }
        }
        if(cnt>cnt1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
	// your code goes here
	return 0;
}
