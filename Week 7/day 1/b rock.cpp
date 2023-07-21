#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;
      cin>>n;
      
      vector<int>v(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
      }
      if(n==1){
        cout<<0<<endl;
        return;
      }
      int cnt=0;
      for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int a = (v[i]&v[j]);
            int o = (v[i]^v[j]);
            if(a>=o){
                cnt++;
            }
        }
      }
      cout<<cnt<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}