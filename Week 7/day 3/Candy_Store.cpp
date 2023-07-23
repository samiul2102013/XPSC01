#include<bits/stdc++.h>
using namespace std;
void solve(){
      int a,b;
      cin>>a>>b;
      if(b<=a){
        cout<<b<<endl;
      }
      else{
        int mini = min(a,b);
        int d = b-mini;
        cout<<a+(d*2)<<endl;
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