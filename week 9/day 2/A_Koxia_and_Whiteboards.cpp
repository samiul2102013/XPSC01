#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n,m;cin>>n>>m;
      vector<int>v;
      for(int i=0;i<n;i++){
        int k;cin>>k;
        v.push_back(k);
      }
      vector<int>nxtv;
      for(int i=0;i<m;i++){
        int k;cin>>k;
        nxtv.push_back(k);
      }
      sort(v.begin(),v.end());
      sort(nxtv.begin(),nxtv.end(),greater<int>());
      if(m<n){
        long long sum=0;
        for(int i=0;i<nxtv.size();i++){
            sum+=nxtv[i];
        }
        for(int i=nxtv.size();i<n;i++){
            sum+=v[i];
        }
        cout<<sum<<endl;
      }
      else if(n==m){
        long long sum=0;
        for(int i=0;i<m;i++){
            sum+=nxtv[i];
        }
        cout<<sum<<endl;
      }
      else{
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=nxtv[i];
        }
        cout<<sum<<endl;
      }
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}