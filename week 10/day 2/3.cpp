#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
void solve(){
      int n;cin>>n;
      long long mult=1;
      for(int i=3;i<=2*n;i++){
        mult= (mult*i)%mod;
      }
      cout<<mult<<endl;     
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}   