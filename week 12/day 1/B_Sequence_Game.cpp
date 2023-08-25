#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;cin>>n;
      vector<int>v(n);
      for(auto &i:v)cin>>i;

      vector<int>ans;
        for(int i=0;i<n;i++){
            if(i==n-1){
                ans.push_back(v[i]);
            }
            else{
                if(v[i]<=v[i+1]){
                    ans.push_back(v[i]);
                }
                else{
                    ans.push_back(v[i]);
                    ans.push_back(v[i+1]);
                }
            }
        }
        cout<<ans.size()<<endl;
        for(auto i:ans)cout<<i<<" ";
        cout<<endl;
      }
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}