#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;cin>>n;
      vector<int>v(n+1,false);
      for(int i=1;i<=n;i++){
        if(v[i]) continue;

        int now = i;
        while(now<=n){
            cout<<now<<" ";
            v[now]=true;
            now*=2;
        }
      }
      cout<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}