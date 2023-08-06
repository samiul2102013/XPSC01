#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;cin>>n;
      int mn=INT_MAX;
      int mx=INT_MIN;
      for(int i=0;i<n;i++){
        int k;cin>>k;
        mn = min(mn,k);
        mx=max(mx,k);
      }
      cout<<mx-mn<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}