#include<bits/stdc++.h>
using namespace std;
void solve(){
      int a,b;cin>>a>>b;
      int mn=min(a,b);
      int ans=(a+b)/4;
      if(ans>mn){
        cout<<mn<<endl;
      }
      else{
        cout<<ans<<endl;
      }
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}