#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;  cin>>n;
      vector<int>v(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
      }
      sort(v.begin(),v.end());
      int cnt =1;
      int maxi = 0;
      for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1]){
            cnt++;
        }
        else{
            maxi = max(cnt,maxi);
            cnt=1;
        }
      }
      cout<<n-maxi<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}