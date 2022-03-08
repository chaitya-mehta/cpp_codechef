#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        double t1,t2,r1,r2;
        cin>>t1>>t2>>r1>>r2;
        double a,b,c,d;
        a=t1*t1;
        b=t2*t2;
        c=r1*r1*r1;
        d=r2*r2*r2;
        double x,y;
        x=a/c;
        y=b/d;
        if(x==y)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
	// your code goes here
	return 0;
}
