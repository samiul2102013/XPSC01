#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n; cin>>n;
      int u=0,r=0;
      string s;cin>>s;
      for(int i=0;i<n;i++){
        if(s[i]=='U'){
            u++;
        }
        else if(s[i]=='D'){
            u--;
        }
        else if(s[i]=='R'){
            r++;
        }
        else{
            r--;
        }
        if(u==1 && r==1){
            cout<<"YES"<<endl;
            return;
        }
      }
      cout<<"NO"<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}