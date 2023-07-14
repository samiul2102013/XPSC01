#include<bits/stdc++.h>
using namespace std;
void solve(){
    int l,w;
    cin>>w>>l;
    if(l&1 && w&1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}