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
      vector<int>ans;
      for(int i=0,j=v.size()-1;i<v.size();i++,j--){
        int p = (v[i]&v[j]);
        ans.push_back(p);
      }
      int mini = INT_MAX;
      for(int i=0;i<ans.size();i++){
        mini = min(mini,ans[i]);
      }
      cout<<mini<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}