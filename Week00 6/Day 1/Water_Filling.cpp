#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b+c)<=1){
        cout<<"Water filling time"<<endl;
    }
    else{
        cout<<"Not now"<<endl;
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