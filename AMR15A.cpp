#include<bits/stdc++.h>
    using namespace std;
    int main()
{
    int n;
    cin>>n;
    int l=0;
    int u=0;
    for(int i=0;i<n;i++)
    {
        int w;
        cin>>w;
        if(w%2==0)
        {
            l++;
        }
        else
        {
            u++;
        }
    }
    if(l>u)
    {
        cout<<"READY FOR BATTLE"<<endl;
    }
    else
    {
        cout<<"NOT READY"<<endl;
    }
    return 0;
}