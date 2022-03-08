#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        double r,a=0,b,p,q;
        cin>>q>>p;
        if(q>1000)
        {
            r=(q*p);
            a=r/10;
            b=r-a;
            cout<<fixed<<setprecision(6)<<b<<endl;
           // printf("%4f \n",b);
        }
        else
        {
            r=(q*p);
            // cout<<float(r)<<endl;
            cout<<fixed<<setprecision(6)<<r<<endl;
             //printf("%4f \n",r);
        }
    }
	// your code goes here
	return 0;
}