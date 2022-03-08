#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,i,x;
    while(t--)
    {
        cin>>n;
        int max=0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x>max)
            {
                max=x;
            }
        }
        cout<<max<<endl;
    }
	// your code goes here
	return 0;
}