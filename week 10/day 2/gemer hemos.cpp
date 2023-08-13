#include<bits/stdc++.h>
using namespace std;
const int N=1e9;
void solve(){
      int n,h;cin>>n>>h;
      vector<int>v(n);
      int mx1=0;
      int mx2=0;
      for(int i=0;i<n;i++){
        cin>>v[i];
        mx1=max(mx1,v[i]);
      }
      for(int i=0;i<v.size();i++){
        if(v[i]==mx1){

        }
        else{
            mx2=max(mx2,v[i]);
        }
      }
      int cnt=0;
      while(h>0){
        queue<int>s;
        s.push(mx1);
        s.push(mx2);
        h-=s.front();
        s.pop();
        cnt++;
        if(h<0){
            break;
        }
        h-=s.front();
        cnt++;
      }
      cout<<cnt<<endl;

}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}