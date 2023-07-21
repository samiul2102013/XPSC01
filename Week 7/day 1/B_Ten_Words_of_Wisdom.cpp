#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;
      cin>>n;
      int maxi = INT_MIN;
      int index;
      for(int i=1;i<=n;i++){
        int a,b;
        cin>>a>>b;
        if(a<=10){
            if(b>maxi){
                maxi = b;
                index=i;
            }
        }
      }
      cout<<index<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}