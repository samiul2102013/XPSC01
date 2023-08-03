#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n; cin>>n;
      int even=0;
      int odd=0;
      for(int i=1;i<=n;i++){
        int k;
        cin>>k;
        if((k&1)==1){
            odd++;
        }
        else{
            even++;
        }
      }
      if(odd==n || even==n){
        cout<<"YES"<<endl;
        return;
      }
      if((n&1)){
        int d=n/2;
        if(odd+1 == even  || even+1==odd ){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
      }
      else{
        if(even==odd){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
      }
}
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}