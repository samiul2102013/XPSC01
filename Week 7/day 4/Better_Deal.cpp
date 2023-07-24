#include<bits/stdc++.h>
using namespace std;
void solve(){
      int a,b;   cin>>a>>b;
      a=100-a;
      b = 200 - (b*2);
      if(a<b){
        cout<<"FIRST"<<endl;
      }
      else if(b<a){
        cout<<"SECOND"<<endl;
      }
      else{
        cout<<"BOTH"<<endl;
      }
}
int main(){
    int t;  cin>>t;
    while(t--){
        solve();
    }
    return 0;
}