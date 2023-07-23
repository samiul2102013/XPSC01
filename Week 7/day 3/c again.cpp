#include<bits/stdc++.h>
using namespace std;
void solve(){
      int a,b;
      cin>>a>>b;
      set<int>s;
      for(int i=0;i<a;i++){
        int k;
        cin>>k;
        s.insert(k);
      }
      if(a==b){
        cout<<0<<endl;
        return;
      }
      auto it = s.begin();
      advance(it,(a-b));
      int ans = *it;
      cout<<ans-1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}