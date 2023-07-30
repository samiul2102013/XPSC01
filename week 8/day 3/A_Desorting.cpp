#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n; cin>>n;
      vector<int>v;
      for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
      }
      vector<int>diff;
      for(int i=0;i<v.size()-1;i++){
        if(v[i+1]<v[i]){
            cout<<0<<endl;
            return;
        }
        else{
            int d= v[i+1]-v[i];
            diff.push_back(d);
        }
      }
      int mini= INT_MAX;
      for(int i=0;i<diff.size();i++){
        mini = min(mini,diff[i]);
      }
      cout<<(mini)/2 +1<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}