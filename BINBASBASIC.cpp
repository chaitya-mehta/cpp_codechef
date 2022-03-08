#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n, k;
        cin>>n>>k;
        
        string s;
        cin>>s;
        
        int start=0, end=n-1, count=0;
        
        while(start<end){
            if(s.at(start) != s.at(end)){
                count++;
            }
            start++;
            end--;
        }
        
        if(count == k){
            cout<<"YES"<<endl;
        }
        
        else if(count < k){
            if(n%2 == 1){
                cout<<"YES"<<endl;
            }
            else if((k-count)%2 == 0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}