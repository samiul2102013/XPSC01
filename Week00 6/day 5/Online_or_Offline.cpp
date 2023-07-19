#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    double n,m;
      cin>>n>>m;
      double ans = n - (n/10);
      if(ans<m){
        cout<<"ONLINE"<<endl;
      }
      else if(ans>m){
        cout<<"DINING"<<endl;
      }
      else{
        cout<<"EITHER"<<endl;
      }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}