#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        double n;
        cin>>n;
        double a;
        a=(0.143*n);
        double b;
        b=pow(a,n);
        cout<<round(b)<<endl;
    }
	// your code goes here
	return 0;
}
