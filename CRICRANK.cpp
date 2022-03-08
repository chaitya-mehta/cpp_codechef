#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,w,c,r1,w1,c1,cnt=0,cnt1=0;
        cin>>r>>w>>c;
        cin>>r1>>w1>>c1;
        if(r>r1)
        {
            cnt++;
        }
        else
        {
            cnt1++;
        }
        if(w>w1)
        {
            cnt++;
        }
        else
        {
            cnt1++;
        }
        if(c>c1)
        {
            cnt++;
        }
        else
        {
            cnt1++;
        }
        if(cnt>cnt1)
        {
            cout<<"A"<<endl;
        }
        else
        {
            cout<<"B"<<endl;
        }
    }
	// your code goes here
	return 0;
}
