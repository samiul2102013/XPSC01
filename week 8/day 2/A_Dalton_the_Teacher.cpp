#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n; cin>>n;
      int cnt =0;
      for(int i=1;i<=n;i++){
        int k;
        cin>>k;
        if(i==k){
            cnt++;
        }
      }
      if((cnt&1)){
        cout<<(cnt+1)/2<<endl;
      }
      else{
        cout<<cnt/2<<endl;
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