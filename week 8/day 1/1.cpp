#include<bits/stdc++.h>
using namespace std;
void solve(){
      int e,a,b;  cin>>e>>a>>b;
      int sum=0;
      for(int i=1;i<=e;i++){
        if((i&1)){
            sum+=b;
        }
        else{
            sum+=a;
        }
      }
      cout<<sum<<endl;
}   
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}