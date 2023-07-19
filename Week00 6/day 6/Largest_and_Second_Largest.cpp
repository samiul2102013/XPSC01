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
      sort(v.begin(),v.end(),greater<int>());
      int sum=0;
      for(int i=0;i<n;i++){
        if(v[i]!=v[i+1]){
            sum+=v[i]+v[i+1];
            break;
        }
      }
      cout<<sum<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}