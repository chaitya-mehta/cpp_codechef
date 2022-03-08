#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    int X,Y,A,B,K,a,b,x,y;
    cin>>X>>Y>>A>>B>>K;
    a=A*K;
    b=B*K;
    x=X+a;
    y=Y+b;
    
    if(x>y)
    {
      cout<< "DIESEL"<<endl; 
    }
    
    else if(x<y)
    {
      cout<< "PETROL"<<endl; 
    }
    
    else
    {
      cout<< "SAME PRICE"<<endl; 
    }
    
    }
	// your code goes here
	return 0;
}
