#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;cin>>n;
      long long sum=0;
      for(int i=0;i<n;i++){
        int k;cin>>k;
        sum+=k;
      }
      if(sum<0){
        cout<<1<<endl;
      }
      else if(sum==n){
        cout<<0<<endl;
      }
      else{
        long long ans= sum-n;
        cout<<ans<<endl;;
      }
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}