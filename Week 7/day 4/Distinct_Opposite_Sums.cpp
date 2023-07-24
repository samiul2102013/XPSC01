#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;
      cin>>n;
      vector<int>v;
      for(int i=1;i<=n;i++){
        v.push_back(i);
      }
      sort(v.begin(),v.begin()+n/2 ,greater<int>());
      for(auto i:v)cout<<i<<" ";
      cout<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        solve();
    }
    return 0;
}