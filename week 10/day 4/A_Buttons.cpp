#include<bits/stdc++.h>
using namespace std;
void solve(){
      int a,b,c;
      cin>>a>>b>>c;
      int ann=0;
      int kate=0;
      if((c&1)){
        ann= a+ c/2+1;
      }
      else{
        ann=a+c/2;
      }
      kate=b+c/2;
      if(ann>kate){
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