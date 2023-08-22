#include<bits/stdc++.h>
using namespace std;
void solve(){
      int a,b,c;
      cin>>a>>b>>c;
      int bred=0,cess=0;
      if((b+c)<a){
        cout<<(b+c)*2+1 <<endl;
      }
      else if((b+c)==a){
        cout<<a*2-1<<endl;
      }
      else{
        cout<<a*2-1<<endl;
      }
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}