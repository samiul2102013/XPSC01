#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n,k;cin>>n>>k;
      if(n%k==0){
        cout<<2<<endl<<n-k-1<<" "<<k+1<<endl;
      }
      else{
        cout<<1<<endl<<n<<endl;
      }
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}