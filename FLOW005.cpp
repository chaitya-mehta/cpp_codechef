#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        int cnt=0;
        cin>>n;
        while(n!=0)
        {
        if(n>=100)
        {
            n=n-100;
            cnt++;
        }
        else if(n>=50)
        {
            n=n-50;
            cnt++;
        }
        else if(n>=10)
        {
            n=n-10;
            cnt++;
        }
        else if(n>=5)
        {
            n=n-5;
            cnt++;
        }
        else if(n>=2)
        {
            n=n-2;
            cnt++;
        }
        else if(n>=1)
        {
            n=n-1;
            cnt++;
        }
        }
        cout<<cnt<<endl;
    }
	// your code goes here
	return 0;
}