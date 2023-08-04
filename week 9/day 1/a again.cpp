#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n,m,k;cin>>n>>m>>k;
      vector<int>v;
      for(int i=0;i<n;i++){
        int p;cin>>p;
        v.push_back(p);
      }
      vector<vector<int>>oparation;
      for(int i=0;i<m;i++){
        int l,r,d;cin>>l>>r>>d;
        oparation.push_back({l,r,d});
      }
      int f =1,l=2;
      for(int i=f;i<=l;i++){
        int ff = oparation[i][0];
        int ll = oparation[i][1];
        int jug = oparation[i][2];
        for(int k=ff;k<=ll;k++){
            v[k]+=jug;
        }
      }
      cout<<endl;
      for(auto i:v)cout<<i<<" ";
}
int main(){
    solve();
    return 0;
}