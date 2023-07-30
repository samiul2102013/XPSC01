#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n,m,k,h; cin>>n>>m>>k>>h;
      int cnt=0;
      vector<int>height;
      for(int i=0;i<n;i++){
        int p;cin>>p;
       height.push_back(p);
      }
      set<int>s;
      for(int i=1;i<m;i++){
        s.insert(i*k);
      }
      for(int i=0;i<height.size();i++){
        int p = abs(h-height[i]);
        if(s.count(p)>0){
            cnt++;
        }
      }
      cout<<cnt<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}