#include <iostream>
using namespace std;

int main() 
{
    int l,b,A,P;
    cin>>l>>b;
    A=l*b;
    P=2*(l+b);
    if(A>P)
    {
        cout<<"Area"<<endl;
        cout<<A<<endl;
    }
    else if(P>A)
    {
        cout<<"Peri"<<endl;
        cout<<P<<endl;
    }
    else
    {
        cout<<"Eq"<<endl;
        cout<<A<<endl;
    }
	// your code goes here
	return 0;
}