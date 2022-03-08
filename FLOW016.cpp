#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c;
        cin>>a>>b;
        c=__gcd(a,b);
        cout<<c<<" "<<a*b/c<<endl;
    }
	// your code goes here
	return 0;
}
