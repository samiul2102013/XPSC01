#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;cin>>n;
      vector<int>v;
      for(int i=0;i<n;i++){
        int k;cin>>k;
        v.push_back(k);
      }
      int one =1;
      for(int i=0;i<n-1;i++){
        if(v[i]!=v[i+1]){
            one =0;
            break;
        }
      }
      if(one){
        cout<<1<<endl;
        return;
      }
      int cnt=0,states=0;
      for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1] && states!=1){
            cnt++;
            states=1;
        }
        else if(v[i]<v[i+1] && states!=-1){
            cnt++;
            states =-1;
        }
      }
      cout<<cnt+1<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}