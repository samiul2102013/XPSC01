#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;  cin>>n;
      vector<int>v;
      for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
      }
      int sum=0;
      sort(v.begin(),v.end());
      if(n==1){
        if(v[0]==1){
            cout<<"YES"<<endl;
            return;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
      }
      if(n==2){
        if(v[0]==1 && v[1]==1){
            cout<<"YES"<<endl;
            return;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
      }
      for(int i=1;i<v.size()-1;i++){
        if(i==1){
            sum=2;
        }
        else{
            sum+=v[i];
        }
        if(v[i+1]<=sum){
            continue;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
      }
      cout<<"YES"<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}