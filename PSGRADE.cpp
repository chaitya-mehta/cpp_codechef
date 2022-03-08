#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a1,b1,c1,t1,a,b,c;
        cin>>a1>>b1>>c1>>t1>>a>>b>>c;
        int s;
        int s1;
        s1=a+b+c;
        s=a1+b1+c1;
        if(s<=t1 && t1<=s1 && a1<=a && b1<=b && c1<=c)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
	// your code goes here
	return 0;
}
