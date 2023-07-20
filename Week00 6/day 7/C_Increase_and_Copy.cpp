#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;
      cin>>n;
      int sq = sqrt(n);
      int nxt = n/sq;
      if(n%sq==0){
        cout<<sq+nxt-2<<endl;
      }
      else{
        cout<<sq+nxt-1<<endl;
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