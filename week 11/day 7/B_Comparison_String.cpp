#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;cin>>n; 
      string s;cin>>s;
      int cnt=1;
      int mx=1;
      char ans=s[0];
      for(int i=1;i<n;i++){
        if(s[i]==ans){
            cnt++;
            mx=max(mx,cnt);
        }
        else{
            ans=s[i];
            cnt=1;
        }
      }
      cout<<mx+1<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}