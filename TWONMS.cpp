#include <iostream>
using namespace std;

int main() 
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        long long n;
        cin>>n;
        if (n==1)
        {
           a=a*2;
            if(a>=b)
            {
                cout<<a/b<<endl;
            }
            else
            {
                cout<<b/a<<endl;
            }
        }
       else if(n%2==0)
        {
            if(a>=b)
            {
                cout<<a/b<<endl;
            }
            else
            {
                cout<<b/a<<endl;
            }
        }
        else
        {
            n=(n/2)+1;
            a=a*2;
            b=b;
            if(a>=b)
            {
                cout<<a/b<<endl;
            }
            else
            {
                cout<<b/a<<endl;
            }
        }
    }
	// your code goes here
	return 0;
}
