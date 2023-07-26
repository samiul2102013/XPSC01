#include<bits/stdc++.h>
using namespace std;
void solve(){
      int a,b;  cin>>a>>b;
      int ans = a*5;
      if(b>ans){
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