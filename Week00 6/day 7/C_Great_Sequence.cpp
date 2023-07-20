#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;
      cin>>n;
      int k;
      cin>>k;
      vector<long long>v(n);
      for(int i=0;i<n;i++) cin>>v[i];
      sort(v.begin(),v.end());
      map<long long ,long long>m;
      for(auto i:v) m[i]++;
      int ans=0;
      for(int i=0;i<v.size();i++){
        if(m[v[i]]>0){
            long long tofind = v[i]*k;
            if(m[tofind]>0){
                m[tofind]--;
            }
            else{
                ans++;
            }
        }
        m[v[i]]--;
      }

      cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}