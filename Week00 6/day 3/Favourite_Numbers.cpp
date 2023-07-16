#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a;
    cin>>a;
    if((a&1)==0 && a%7==0){
        cout<<"Alice"<<endl;
    }
    else if((a&1)==1 && a%9==0){
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Charlie"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}