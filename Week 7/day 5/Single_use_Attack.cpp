#include<bits/stdc++.h>
using namespace std;
void solve(){
      int x,y,z;   cin>>x>>y>>z;
      x-=z;
      int ans = ceil(static_cast<double>(x)/y);
      cout<<ans+1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}