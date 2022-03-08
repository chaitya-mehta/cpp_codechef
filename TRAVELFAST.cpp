#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x>y)
        {
            cout<<"CAR"<<endl;
        }
        else if(y>x)
        {
            cout<<"BIKE"<<endl;
        }
        else
        {
            cout<<"SAME"<<endl;
        }
    }
	// your code goes here
	return 0;
}
