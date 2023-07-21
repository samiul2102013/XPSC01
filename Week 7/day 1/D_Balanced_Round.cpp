#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,k;
      cin>>n>>k;
      vector<long long>v(n);
      for(long long i=0;i<n;i++){
        cin>>v[i];
      }
      sort(v.begin(),v.end());
      long long cnt=0;
      long long maxi = 0;
      for(long long i=0;i<n-1;i++){
        long long d = v[i+1]-v[i];
        if(d<=k){
            cnt++;
            maxi=max(cnt,maxi);
        }
        else{
            cnt=0;
        }
      }

      cout<<n-(maxi+1)<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}