#include<bits/stdc++.h>
using namespace std;
void solve(){
      int a,b,c;cin>>a>>b>>c;
      long long sum = a+b*2 + c*3;
      cout<<(sum&1)<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}