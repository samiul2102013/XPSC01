#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;cin>>n;
      vector<long long>v(n);
      for(auto &i:v)cin>>i;
      for(int i=0;i<n;i++){
        long long d =sqrt(v[i]);
        int cnt=0;
        for(int j=1;j<=d;j++){
            if(v[i]%j==0){
                cnt++;
            }
            if(cnt>=3){
                break;
            }
        }
        if(cnt>=3 || cnt<2){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
      }
}
int main(){
    solve();
    return 0;
}