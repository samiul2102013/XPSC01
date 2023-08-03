#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;cin>>n;
      vector<int>v;
      for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
      }
      sort(v.begin(),v.end());
      int cnt =1;
      for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1]){
            cnt++;
        }
        else{
            cnt=1;
        }
        if(cnt>=3){
            cout<<v[i]<<endl;
            return;
        }
      }
      cout<<-1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}