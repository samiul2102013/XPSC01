#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;
      string s;
      cin>>n>>s;
      map<string,int>mp;
      for(int i=0;i<n-1;i++){
        string sub=s.substr(i,2);
        if(mp.find(sub)!=mp.end()){
            if(mp[sub]<i-1){
                cout<<"YES"<<endl;
                return;
            }
        }
        else{
            mp[sub]=i;
        }
      }
      cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}