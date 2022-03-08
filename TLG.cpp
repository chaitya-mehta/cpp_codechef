#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int e=0;
    int a,b,c=0,d,s1=0,s2=0,flag;
    while(t--)
    {
       
        cin>>a>>b;
        s1+=a;
        s2+=b;
        if(s1>s2)
        {
            d=s1-s2;
            if(d>c)
            {
                c=d;
            }
        }
        else
        {
            d=s2-s1;
            if(d>e)
            {
                e=d;
            }
        }
    }
    
    if(c>e)
    {
        cout<<1<<" "<<c;
    }
    else
    {
        cout<<2<<" "<<e;
    }
	// your code goes here
	return 0;
}