#include<bits/stdc++.h>
using namespace std;
void solve(){
      string s;cin>>s;
      char x='0';
      for(auto &c:s){
        if(c=='?') c =x;
        x=c;
      }
      cout<<s<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}