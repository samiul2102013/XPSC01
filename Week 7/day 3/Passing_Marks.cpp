#include<bits/stdc++.h>
using namespace std;
void solve(){
      int a,b;
      cin>>a>>b;
      vector<int>v;
      for(int i=0;i<a;i++){
        int k;
        cin>>k;
        v.push_back(k);
      }
      if(a==b){
        cout<<0<<endl;
      }
      else{
        int ans ;
        sort(v.begin(),v.end());
            for(int i=a-1;i>=0 && b>0;i--,b--){
                ans = v[i];
            }
            cout<<ans-1<<endl;
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