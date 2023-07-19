#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n,m;
      cin>>n>>m;
      vector<int>v;
      vector<int>c;
      set<int>s;
      int co=0;
      for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
        s.insert(k);
      }
      vector<int>visite(v.size(),0);
      for(int i=0;i<v.size();i++){
        if(visite[i]==0){
            int d = v[i]*m;
            if(s.count(d)>0){
                auto it = find(v.begin(),v.end(),d);
                int index = distance(v.begin(),it);
                if(visite[index]==0){
                    visite[i]=1;
                    visite[index]=1;
                }
            }
        }
      }
      for(int i=0;i<visite.size();i++){
        if(visite[i]==0){
            co++;
        }
      }
      for(auto i:visite)cout<<i<<" ";
      cout<<"c="<<co<<endl;
}
int main(){
    solve();
    return 0;
}