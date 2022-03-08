#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,cnt=0;
        string s,a;
        cin>>s>>a;
        for(i=0;i<a.length();i++)
        {
            for(j=0;j<s.length();j++)
            {
                if(a[i]==s[j])
                {
                    cnt++;
                    break;
                }
            }
        }
        cout<<cnt<<endl;
    }
	// your code goes here
	return 0;
}
