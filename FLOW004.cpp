#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int sum=0;
        string s;
        cin>>s;
        sum=s[0]+s[s.size()-1];
    //   cout<<s[0]<<endl;
    //   cout<<s[s.size()-1]<<endl; 
        cout<<sum-(48*2)<<endl;
    }
	// your code goes here
	return 0;
}
