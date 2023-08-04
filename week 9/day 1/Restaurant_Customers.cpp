#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;cin>>n;
      vector<pair<int,char>>vp;
      for(int i=0;i<n;i++){
        int f,l;cin>>f>>l;
        vp.push_back(make_pair(f,'f'));
        vp.push_back(make_pair(l,'l'));
      }
      int audi=0;
      int maxi=0;
      sort(vp.begin(),vp.end());
      for(auto i:vp){
        if(i.second=='f'){
            audi++;
            maxi = max(maxi,audi);
        }
        else{
            audi--;
        }
      }
      cout<<maxi<<endl;
}
int main(){
    solve();
    return 0;
}