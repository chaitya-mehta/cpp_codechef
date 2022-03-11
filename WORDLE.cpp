#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        string s1;
        cin>>s;
        cin>>s1;
        int i,j;
        for(i=0,j=0;i<s.size();i++,j++)
        {
            if(s[i]==s1[j])
            {
                s[i]='G';
            }
            else
            {
                s[i]='B';
            }
        }
        cout<<s<<endl;
    }
	// your code goes here
	return 0;
}
