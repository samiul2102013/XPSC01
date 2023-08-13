#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;cin>>n;
      vector<int>v(n);
      for(int i=0;i<n;i++)cin>>v[i];
      sort(v.begin(),v.end());
      int cnt=1;
      int mx=0;
      for(int i=0;i<n;i++){
        if(v[i]==v[i+1]){
            cnt++;
            mx=max(mx,cnt);
        }
        else{
            cnt=1;
        }
      }
      if((n&1)){
        if(mx>(n+1)/2){
            cout<<-1<<endl;
            return;
        }
      }
      else{
        if(mx>n/2){
            cout<<-1<<endl;
            return;
        }
      }
      for(int i=0;i<n;i++){
        if(i==0){
            if(v[i]==v[i+1]){
                while(v[i]==v[i+1]){
                    cout<<v[i]<<" ";
                    i++;
                }
                cout<<v[i]<<endl;
            }
            else{
                cout<<v[i]<<endl;
            }
        }
        else{
            cout<<v[i]<<" ";    
        }
      }
      cout<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}