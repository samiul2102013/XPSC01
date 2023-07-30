#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n,k;
      cin>>n>>k;
      multimap<int,int,greater<int>>m;
      for(int i=1;i<=n;i++){
        int p; cin>>p;
        m.insert({i,p});
      }
      for(auto i:m)cout<<i.first<<" "<<i.second<<endl;
      cout<<endl<<endl;
      for(auto it =m.begin();it!=m.end();it++){
        it->second -=k;
      }
      for(auto i:m)cout<<i.first<<" "<<i.second<<endl;
}
int main(){
    solve();
    return 0;
}