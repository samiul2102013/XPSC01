#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;
      cin>>n;
      vector<int>v;
      for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
      }
      int result = v[0];
      for(int i=1;i<n;i++){
        result&=v[i];
      }
      cout<<result<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}