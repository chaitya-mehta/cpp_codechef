#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p,a=0,cnt=0;
        cin>>p;
        while(p>=a)
        {
            a=a+2;
            cnt++;
        }
        cout<<cnt<<endl;
    }
	// your code goes here
	return 0;
}
