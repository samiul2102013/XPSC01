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
      for(int i=0;i<v.size()-1;i++){
        if(v[i]!=v[i+1]){
            one =0;
        }
      }
      if(one){
        cout<<1<<endl;
        return;
      }
      int cnt=1;
      int i=0;
      while(i<n-1){
        if(v[i+1]<v[i]){
            cnt++;
            while(i<n-1 && v[i+1]<=v[i]){
                i++;
            }
        }
        else{
            cnt++;
            while(i<n-1 && v[i+1]>=v[i]){
                i++;
            }
        }
      }
      cout<<cnt<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}