#include<bits/stdc++.h>
using namespace std;
void solve(){
      int x,y;  cin>>x>>y;

      if(x>8){
        cout<<"NO"<<endl;
        return;
      }
      int mul = x*y;
      if(mul>500){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }
}
int main(){
    int t;  cin>>t;
    while(t--){
        solve();
    }
    return 0;
}