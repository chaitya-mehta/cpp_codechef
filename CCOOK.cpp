#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[5];
        int i;
        int cnt=0;
        for(i=0;i<5;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<5;i++)
        {
            if(a[i]==1)
            {
                cnt++;
            }
            else
            {
                cnt;
            }
        }
        if(cnt==0)
        {
            cout<<"Beginner"<<endl;
        }
        else if(cnt==1)
        {
            cout<<"Junior Developer"<<endl;
        }
        else if(cnt==2)
        {
            cout<<"Middle Developer"<<endl;
        }
        else if(cnt==3)
        {
            cout<<"Senior Developer"<<endl;
        }
        else if(cnt==4)
        {
            cout<<"Hacker"<<endl;
        }
        else
        {
            cout<<"Jeff Dean"<<endl;
        }
    }
	// your code goes here
	return 0;
}
