#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;;
        cin>>n;
        while(n!=0)
        {
            if(n%10==4)
            {
                cnt++;
            }
            n=n/10;
        }
        cout<<cnt<<endl;
    }

	// your code goes here
	return 0;
}