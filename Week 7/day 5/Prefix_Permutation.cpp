#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n; cin>>n;
      if((n&1)){
        cout<<-1<<endl;
        return;
      }
      if(n==2){
        cout<<1<<" "<<2<<endl;
        return;
      }
      int i = 3;
      cout<<1<<" "<<2<<" ";
      while(i<=n){
        if(i%2==1){
            cout<<i+1<<" ";
        }
        else{
            cout<<i-1<<" ";
        }
        i++;
      }
      cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}