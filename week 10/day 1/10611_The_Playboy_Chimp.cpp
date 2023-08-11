#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;cin>>n;
      vector<int>v(n);
      for(int i=0;i<n;i++)cin>>v[i];
      int q;cin>>q;
      sort(v.begin(),v.end());
      while(q--){
        int a;cin>>a;
        auto u = upper_bound(v.begin(),v.end(),a);
        auto l = lower_bound(v.begin(),v.end(),a);
        int up = u - v.begin();
        int lo= l - v.begin();
        /* for(auto i:v)cout<<i<<" ";
        cout<<endl;
        cout<<"ui"<<up<<" "<<"li="<<lo<<"    "<<v[up]<<v[lo]<<endl; */
        if(lo==0)cout<<"X ";
        else cout<<v[lo-1]<<" ";

        if(up==n)cout<<"X"<<endl;
        else cout<<v[up]<<endl;
      }
}
int main(){
    solve();
    return 0;
}