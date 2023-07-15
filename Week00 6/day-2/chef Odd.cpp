#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long  a,b;
    cin>>a>>b;
    long long o=0;
    if(a&1){
        o=a/2- 1;
    }
    else{
        o=a/2;
    }
    if(o==b){
        cout<<"YES"<<endl;
        return;
    }
    if(o<b){
        cout<<"NO"<<endl;
    }
    else{
        o-=b;
        if(o&1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}