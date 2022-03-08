#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int cnt=0,cnt1=0,i;
        cin>>s;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                cnt++;
            }
            else if(s[i]=='1')
            {
                cnt1++;
            }
        }
        if(cnt==1||cnt1==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
	// your code goes here
	return 0;
}
