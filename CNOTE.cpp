#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k,n,i;
        int p,c,flag=0;
        cin>>x>>y>>k>>n;
        for(i=0;i<n;i++)
        {
            cin>>p>>c;
            if(p>=(x-y) && k>=c)
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            cout<<"LuckyChef"<<endl;
        }
        else
        {
            cout<<"UnluckyChef"<<endl;
        }
    }
    
	// your code goes here
	return 0;
}
