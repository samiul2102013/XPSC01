#include<bits/stdc++.h>
using namespace std;
void solve(){
      string s;cin>>s;
      cout<<s;
      reverse(s.begin(),s.end());
      cout<<s<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}