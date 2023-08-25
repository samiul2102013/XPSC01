#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n,k;cin>>n>>k;
      vector<int>divisor;
      for(int i=1;i*i<=n;i++){
        if(n%i==0){
            divisor.push_back(i);
            if((n/i)!=i){
                divisor.push_back(n/i);
            }
        }
        for(auto i:divisor)cout<<i<<" ";
      }
}
int main(){
    solve();
    return 0;
}