#include<bits/stdc++.h>
using namespace std;
void solve(){
      long long n;
      cin>>n;
      if(n==1){
        cout<<1<<endl;
        return;
      }
      int sq = sqrt(n); 
      long long cnt=0;
      long long maxi=0;
      for(long long i=1;i<sq;i++){
        if((n%i)==0){
            cnt++;
            maxi=max(cnt,maxi);
        }
        else{
            cnt=0;
        }
      }
      cout<<maxi<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}