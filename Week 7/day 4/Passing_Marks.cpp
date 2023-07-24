#include<bits/stdc++.h>
using namespace std;
void solve(){
      long long a,b;
      cin>>a>>b;
      vector<long long>v;
      for(int i=0;i<a;i++){
        long long k;
        cin>>k;
        v.push_back(k);
      }
      if(a==b){
        cout<<0<<endl;
      }
      else{
        int ans ;
        sort(v.begin(),v.end());
            ans = v[a-b]-1;
            cout<<ans<<endl;
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