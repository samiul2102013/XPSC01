#include<bits/stdc++.h>
using namespace std;
void solve(){
      string s;cin>>s;
      for(int i=0;i<s.size()-1;i++){
            if(s[i]=='A' && s[i+1]=='B' || s[i]=='B' && s[i+1]=='B'){
                s.erase(s.begin()+i,s.begin()+i+2);
            }
        }
        cout<<s;
}
int main(){
    solve();
    return 0;
}