#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;cin>>n;
      int g;
      int h;
      for(int i=0;i<n;i++){
        int k;cin>>k;
        if(i==1){
            g=__gcd(h,k);
        }
        g=__gcd(g,k);
        h=k;
      }
      int cnt=0;
      if(g==1){
        cout<<0<<endl;
        return;
      }
      if(__gcd(g,n)==1){
        cout<<1<<endl;
        return;
      }
       
      if(__gcd(g,n-1)==2){
        cout<<2<<endl;
      }
      else{
        cout<<3<<endl;
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