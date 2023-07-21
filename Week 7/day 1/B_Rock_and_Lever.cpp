#include<bits/stdc++.h>
using namespace std;
void solve(){
      long long n;
      cin>>n;
      if(n==1){
        cout<<0<<endl;
        return;
      }
      vector<long long>v(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
      }
      sort(v.begin(),v.end());
      long long cnt=0;
      for(int i=0;i<n-1;i++){
        long long o = (v[i]^v[i+1]);
        long long a = (v[i]&v[i+1]);
        if(a>=o){
            cnt++;
        }
      }
      if((v[0] & v[v.size()-1])>=(v[0]^v[v.size()-1])){
        cnt++;
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