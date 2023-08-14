#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;cin>>n;
      int one=0,zero=0;
      for(int i=0;i<n;i++){
        int k;cin>>k;

        if(k==0)zero++;

        if(k==1)one++;
      }
      cout<<(long long)(1<<zero)*one<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}