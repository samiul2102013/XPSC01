#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n,k;
      cin>>n>>k;
      vector<int>v;
      for(int i=0;i<n;i++){
        int p;cin>>p;
        p%=k;
        v.push_back(p);
      }
      for(int j=0;j<k;j++){
        for(int i=0;i<n;i++){
        if(v[i]==j){
            cout<<i+1<<" ";
        }
      }
      }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}