#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;cin>>n;
      vector<pair<int,int>>vp;
      for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        vp.push_back(make_pair(a,b));
      }
      sort(vp.begin(),vp.end());
      for(int i=0;i<vp.size()-1;i++){
        int start = vp[i].first;
        int finis=vp[i].second;
        int nxtstar=vp[i+1].first;
        if(nxtstar<finis){
            cout<<"NO"<<endl;
            return;
        }
      }
      cout<<"YES"<<endl;
}
int main(){
    solve();
    return 0;
}