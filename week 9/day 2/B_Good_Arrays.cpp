#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;cin>>n;
      long long array_sum=0;
      for(int i=0;i<n;i++){
        int k;cin>>k;
        array_sum+=k;
      }
      if(n==1){
        cout<<"NO"<<endl;
        return;
      }
      if((n&1)){
        int s = (n+1)/2;
        long long sum = s*2 + (n-s);
        if(array_sum<sum){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
      }
      else{
        int s = n/2;
        long long sum = s*2 + n/2;
        if(array_sum<sum){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
      }
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}