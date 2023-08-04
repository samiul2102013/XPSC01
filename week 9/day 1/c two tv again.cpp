#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b){
    if(a.first==b.first){
        return a.second>b.second;
    }
    return a.first<b.first;
}
void solve(){
      int n;cin>>n;
      vector<pair<int,int>>vp;
      for(int i=0;i<n;i++){
        int a,b; cin>>a>>b;
        vp.push_back(make_pair(a,1));
        vp.push_back(make_pair(b,-1));
      }
      sort(vp.begin(),vp.end(),cmp);
      int cnt=0;
      for(auto i:vp){
        cnt+=i.second;
        if(cnt>=3){
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