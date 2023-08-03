#include<bits/stdc++.h>
using namespace std;
bool is_present(string s,string ans){
    
    char a=ans[0];
      char b = ans[1];
      int cnt=0;
      bool arek;
      for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1] && s[i+1]==s[i+3]){
            arek=true;
        }
        if(s[i]==a && s[i+1]==b){
            cnt++;
        }
        if(cnt>=2){
            cout<<"YES"<<endl;
            return true;
        }
        if(arek){
            if(cnt>=3){
                cout<<"YES"<<endl;
            }
        }
      }
      cnt=0;
      for(int i=1;i<s.size();i+=2){
        if(s[i]==a && s[i+1]==b){
            cnt++;
        }
        if(cnt>=2){
            cout<<"YES"<<endl;
            return true;
        }
      }
      return false;
}
void solve(){
    int n;cin>>n;
      string s;
      cin>>s;
      for(int i=0;i<s.size()-1;i++){
        string ans;
        ans+=s[i];
        ans+=s[i+1];
        if(is_present(s,ans)){
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