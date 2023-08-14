#include<bits/stdc++.h>
using namespace std;
void solve(){
      string s;cin>>s;
      string t=s;
      sort(t.begin(),t.end());
      char ans = t[0];
      cout<<ans<<endl;
      bool state = true;
      for(int i=0;i<s.size();i++){
        if(s[i]==ans && state == true){
            state=false;
            continue;
        }
        else cout<<s[i];
      }
      cout<<endl;

}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}