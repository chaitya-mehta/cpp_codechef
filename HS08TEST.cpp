// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
	
// 	float y,z,x;
// 	cin>>x>>y;
	
// 	if((int) x%5==0 || x+0.5<y)
// 	{
// 	    z=y-x-0.5;
// 	    cout<<fixed<<setprecision(2)<<z<<endl;
// 	}
// 	else
// 	{
// 	    cout<<fixed<<setprecision(2)<<y<<endl;
// 	}
// 	return 0;
// }
#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	int x;
	float y;
	cin>>x>>y;
	float w=x+0.5;
	if(x%5!=0 || w>y)
	   cout<<y;
	else
	   cout<<y-w;
     
    return 0;
}