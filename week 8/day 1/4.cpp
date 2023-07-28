#include<bits/stdc++.h>
using namespace std;
void solve(){
      int a,b;  cin>>a>>b;
      if(a*15 >= 2*b){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
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