#include<bits/stdc++.h>
using namespace std;
void solve(){
      int a,b,c; cin>>a>>b>>c;
      if((b+c)>=a){
        cout<<(a*2)-1<<endl;
      }
      else if(a>(b+c)){
        cout<<(b+c)*2+1<<endl;
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