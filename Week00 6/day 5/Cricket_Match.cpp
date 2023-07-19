#include<bits/stdc++.h>
using namespace std;
void solve(){
      int a,b;
      cin>>a>>b;
      int ans = b*36;
      if(ans>=a){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}