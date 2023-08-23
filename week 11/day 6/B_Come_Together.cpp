#include<bits/stdc++.h>
using namespace std;
void solve(){
      int a1,a2;cin>>a1>>a2;
      int b1,b2;cin>>b1>>b2;
      int c1,c2;cin>>c1>>c2;
      int ab=0,ac=0,bc=0;
      ab=abs(a1-b1)+abs(a2-b2)-1+2;
      ac=abs(a1-c1)+abs(a2-c2)-1+2;
      bc=abs(b1-c1)+abs(b2-c2)-1+2;
      if(bc==ab+ac-1){
        cout<<1<<endl;
      }
      else{
        int r = ab+ac-bc;
        int ans=(r-1)/2 +1;
        cout<<ans<<endl;;
      }
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}