#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        float h,c,T;
        cin>>h>>c>>T;
        if(h>50 && c<0.7 && T>5600)
        {
            cout<<10<<endl;
        }
        else if(h>50 && c<0.7)
        {
            cout<<9<<endl;
        }
        else if(c<0.7 && T>5600)
        {
            cout<<8<<endl;
        }
        else if(h>50 && T>5600)
        {
            cout<<7<<endl;
        }
        else if(h>50 || c<0.7 || T>5600)
        {
            cout<<6<<endl;
        }
        else
        {
            cout<<5<<endl;
        }
    }
	// your code goes here
	return 0;
}