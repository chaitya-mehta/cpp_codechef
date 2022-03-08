#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int cnt=0,cnt1=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a')
            {
                cnt++;
            }
            else if(s[i]=='b')
            {
                cnt1++;
            }
        }
        if(cnt<=cnt1)
        {
            cout<<cnt<<endl;
        }
        else
        {
            cout<<cnt1<<endl;
        }
    }
	// your code goes here
	return 0;
}
