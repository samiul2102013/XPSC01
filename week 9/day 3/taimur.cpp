#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
      string s;cin>>s;
      string ans="timur";
      int check =0;
      for(int i=0;i<s.size();i++){
        if(s[i]=='T'){
            s[i]='t';
            check=1;
        }
      }
      if(check){
        sort(ans.begin(),ans.end());
        sort (s.begin(),s.end());
        if(s==ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
      }
      else{
        cout<<"NO"<<endl;
      }
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}