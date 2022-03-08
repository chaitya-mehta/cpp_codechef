#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x,a=0,i;
        cin>>n>>k>>x;
        if(k<x)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            a=0;
            for(i=0;i<n;i++)
            {
                if(a==x)
                {
                    a=0;
                    cout<<a<<" ";
                    a++;
                }
                else
                {
                    cout<<a<<" ";
                    a++;
                }
            }
            cout<<endl;
        }
    }
	// your code goes here
	return 0;
}
 