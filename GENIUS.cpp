#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,a=0,b=0;
        cin>>n>>x;
        if(x%3==0)
        {
            a=a+(x/3);
        }
        else if(x%3==1)
        {
            a=a+(x/3)+1;
            b=b+2;
        }
        else
        {
            a=a+(x/3)+1;
            b++;
        }
        if(a+b<=n)
        {
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<n-(a+b)<<endl;;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
	// your code goes here
	return 0;
}
