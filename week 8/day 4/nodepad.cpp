#include<bits/stdc++.h>
using namespace std;
void is_present(string ans,string s){
    int cnt=0;
    char a=ans[0];
    char b=ans[1];  
    for(int i=0;i<s.size()-1;i+2){
        cout<<a<<b<<" "<<s[i]<<s[i+1]<<endl;
        if(a==s[i]&&b==s[i+1]){
            cnt++;
        }
        if(cnt==2){
            cout<<"YES"<<endl;
        }
    }
}
void solve(){
    int n;cin>>n;
      string s;
      cin>>s;
      for(int i=0;i<s.size()-1;i++){
        string ans="";
        ans+=s[i];
        ans+=s[i+1];
        is_present(ans,s);
        ans.clear();
      }
      cout<<"NO"<<endl;
}
int main(){
    solve();
    return 0;
}