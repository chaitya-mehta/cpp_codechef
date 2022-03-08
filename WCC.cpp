#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        string s;
        cin>>s;
        int c=0,d=0,n=0,i;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='N')
            {
                n++;
            }
            else if(s[i]=='C')
            {
                c++;
            }
            else
            {
                d++;
            }
        }
        c=2*c+d;
        n=2*n+d;
        if(c>n)
        {
            cout<<(60*x)<<endl;
        }
        else if(n>c)
        {
            cout<<(40*x)<<endl;
        }
        else
        {
            cout<<(55*x)<<endl;
        }
    }
	// your code goes here
	return 0;
}