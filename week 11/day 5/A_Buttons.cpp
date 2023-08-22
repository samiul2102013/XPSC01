#include<bits/stdc++.h>
using namespace std;
void solve(){
      int a,b,c;
      cin>>a>>b>>c;
      int ann=0,kady=0;
      if((c&1)){
        ann=a+(c+1)/2;
      }
      else{
        ann=a+c/2;
      }
      kady=b+c/2;
      if(ann>kady){
        cout<<"First"<<endl;
      }
      else{
        cout<<"Second"<<endl;
      }
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}