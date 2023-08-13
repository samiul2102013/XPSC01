#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;cin>>n;
      vector<int>v(n);
      for(int i=0;i<n;i++)cin>>v[i];
      sort(v.begin(),v.end());
      int q;cin>>q;
      while(q--){
        int a;cin>>a;
      auto l = lower_bound(v.begin(),v.end(),a);
      auto u = upper_bound(v.begin(),v.end(),a);
      int upper=u-v.begin();
      int lower = l-v.begin();
      
      if(lower!=0){
        cout<<v[lower-1]<<" ";
      }
      else{
        cout<<"X ";
      }
      if(upper!=n){
        cout<<v[upper]<<endl;
      }
      else{
        cout<<"X"<<endl;
      }
      }
}
int main(){
    solve();
    return 0;
}