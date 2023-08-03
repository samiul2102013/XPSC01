#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n; cin>>n;
      vector<int>v;
      int maxi=0,maxiindex=0;
      for(int i=0;i<n;i++){
        int k;
        cin>>k;
        if(k>=maxi){
            maxi=k;
            maxiindex=i;
        }
        v.push_back(k);
      }

      for(int i=1;i<n;i++){
        if(v[i]>=v[i-1]){
            continue;
        }
        else if(v[i]+maxi>=v[i-1]){
            cout<<i+1<<" "<<maxiindex+1<<endl;
            v[i]=v[i]+maxi;
        }
        else{
            int m=maxi;
            while(m+v[i]<v[i-1]){
                m*=2;
                cout<<maxiindex+1<<" "<<maxiindex+1<<endl;
            }
            v[i]=v[i]+m;
            cout<<i+1<<" "<<maxiindex+1<<endl;
        }
      }
}
int main(){
    solve();
    return 0;
}