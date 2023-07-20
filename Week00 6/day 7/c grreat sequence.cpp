#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;
      cin>>n;
      int k;
      cin>>k;
      vector<int>v(n);
      for(int i=0;i<n;i++) cin>>v[i];
      sort(v.begin(),v.end());
      map<int,int>m;
      for(auto i:v) m[i]++;
      int ans=0;
      for(auto i:v){
        if(m[i]>0){
            int tofind =i*k;
            if(m[tofind]>0){
                m[tofind]--;
            }
            else{
                ans++;
            }
        }
        m[i]--;
      }

      cout<<ans<<endl;
}
int main(){
    solve();
    return 0;
}