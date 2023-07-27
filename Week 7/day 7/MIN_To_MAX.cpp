#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;    cin>>n;
      int mini = INT_MAX;
      vector<int>v;
      for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
        mini = min(mini,k);
      }
      
      int cnt =0;
      for(int i=0;i<n;i++){
        if(v[i]!=mini){
            cnt++;
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