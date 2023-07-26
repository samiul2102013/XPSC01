#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n; cin>>n;
      int sum=0;
      for(int i=0;i<n;i++){
        int k;
        cin>>k;
        sum+=k;
      }
      if((sum&1)){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
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