#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;
      cin>>n;
      int p=n-1;
      int ans = n&p;
      while(ans){
        p--;
        ans&=p;
      }
      cout<<p<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}