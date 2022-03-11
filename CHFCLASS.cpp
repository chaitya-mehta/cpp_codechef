#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<6)
        {
            cout<<"0"<<endl;
        }
        else 
        { 
            n=(n+1)/7;
            cout<<n<<endl;
        }
    }
	// your code goes here
	return 0;
}