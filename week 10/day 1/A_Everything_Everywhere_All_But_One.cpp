#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;cin>>n;
      int sum=0;
      vector<int>v(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
      }
      for(int i=0;i<n;i++){
        int t = sum;
         t = t-v[i];
        if(t%(n-1)==0){
            int ans=t/(n-1);
            if(ans==v[i]){
                cout<<"YES"<<endl;
                return;
            }
        }
      }
      cout<<"NO"<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}