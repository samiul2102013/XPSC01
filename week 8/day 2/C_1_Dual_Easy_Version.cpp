#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n; cin>>n;
      vector<pair<int,int>>vp;
      int index =0;
      int maxi=0;
      vector<int>v;
      for(int i=1;i<=n;i++){
        int k; cin>>k;
        v.push_back(k);
        if(k>maxi){
            index=i;
            maxi=k;
        }
      }
      int rakha_maxi = maxi;
      int d=v[0];
      for(int i=1;i<v.size();i++){
        if(d<=v[i]){
            d=v[i];
            continue;
        }
        else{
            if(rakha_maxi+v[i]<d){
                maxi = rakha_maxi;
                while((v[i]+maxi)<=d){
                    maxi*=2;
                    auto a = make_pair(index,index);
                    vp.push_back(a);
                    if(v[i]+maxi>=d){
                        break;
                    }
                }
                auto p = make_pair(i+1,index);
                vp.push_back(p);
                d= v[i]+maxi;
            }
            else{
                auto p = make_pair(i+1,index);
                vp.push_back(p);
                d = rakha_maxi+v[i];
            }
        }
      }
      for(auto i:vp){
        cout<<i.first<<" "<<i.second<<endl;
      }
}
int main(){
    solve();
    return 0;
}