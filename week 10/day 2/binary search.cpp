#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;cin>>n;
      vector<int>v(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
      }
      int x;cin>>x;
      int l =0;
      int r=n-1;
      int ans=-1;
      while(l<=r){
        int mid = l+(r-l)/2;
        if(v[mid]==x){
            l= mid+1;
            ans=mid;
        }
        else if(x<v[mid]){
            r = mid-1;
        }
        else{
            l= mid+1;
        }
      }
      cout<<ans;
}
int main(){
    solve();
    return 0;
}