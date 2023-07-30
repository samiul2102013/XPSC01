#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;  cin>>n;
      vector<int>v;
      int presum=0;
      bool pres=true;
      for(int i=1;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
        presum+=i;
        if(presum!=k){
            pres = false;
        }
      }
      if(pres){
        cout<<"YES"<<endl;
        return;
      }
      vector<int>visited;
      for(int i=0;i<n;i++){
         visited.push_back(i+1);
      }
      vector<int>diff;
      bool betor=false;
      for(int i=0;i<v.size()-1;i++){
        int d = v[i+1]-v[i];
        diff.push_back(d);
        if(d<=n){
            visited[d-1]=0;
        }
        cout<<d<<" ";
      }
      int sum=0;
      for(auto i:visited){
        if(i!=0){
            sum+=i;
        }
      }
      cout<<endl;
      cout<<"sum="<<sum<<" v[0]="<<v[0]<<" v[si]="<<v[v.size()-1]<<endl;
      for(auto i:visited)cout<<i<<" ";
      cout<<endl;
      if(sum==v[0]||sum==v[v.size()-1]){
        cout<<"YES"<<endl;
      }
}
int main(){
    solve();
    return 0;
}