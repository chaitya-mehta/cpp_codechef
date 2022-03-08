    #include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long int t;
    cin>>t;
    while(t--)
    {
       long long int n,i,cnt=0;
        cin>>n;
        if(n==1)
        {
            cout<<"no"<<endl;
        }
        else
        {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
               cnt++; 
            }
            
        }
        if(cnt==0)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
        }
    }
    
	// your code goes here
	return 0;
}