#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,sum=0;
        cin>>n;
        a=n;
        while(a>0)
        {
            sum=sum*10+a%10;
            a=a/10;
        //     sum=sum*10;
        }
        if(sum == n)
        {
            cout<<"wins"<<endl;
        }
        else
        {
            cout<<"loses"<<endl;
        }
    }
	// your code goes here
	return 0;
}
