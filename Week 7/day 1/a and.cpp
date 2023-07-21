#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;
      cin>>n;
      if(n==1){
        cout<<0<<endl;
        return;
      }
      if(n==2 || n==3){
        cout<<1<<endl;
        return;
      }
      if(n==4){
        cout<<3<<endl;
        return;
      }
      int k=1;
      while(k<n){
        k<<=1;
      }
      if(n%k==0){
        cout<<k-1<<endl;
        return;
      }
      k=k>>1;
      cout<<k-1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}