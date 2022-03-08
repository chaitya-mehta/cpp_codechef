#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        char a;
        cin>>a;
        if(a=='b'||a=='B')
        {
            cout<<"BattleShip"<<endl;
        }
        else if(a=='c'||a=='C')
        {
            cout<<"Cruiser"<<endl;
        }
        else if(a=='D'||a=='d')
        {
            cout<<"Destroyer"<<endl;
        }
        else if(a=='f'||a=='F')
        {
            cout<<"Frigate"<<endl;
        }
    }
	// your code goes here
	return 0;
}