#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;cin>>n;
      int sum=0;
      vector<int>v;
      for(int i=0;i<n;i++){
        int k;cin>>k;
        sum+=k;
        v.push_back(k);
      }
      if(sum==0){
        cout<<"NO"<<endl;
        return;
      }
      if(sum>0){
        sort(v.begin(),v.end(),greater<int>());
      cout<<"YES"<<endl;
      for(auto i:v)cout<<i<<" ";
      cout<<endl;
      }
      else{
        sort(v.begin(),v.end());
        cout<<"YES"<<endl;
        for(auto i:v)cout<<i<<" ";
        cout<<endl;
      }
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}