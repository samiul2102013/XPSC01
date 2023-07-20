#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e6;
void solve(){
      long long n;
      cin>>n;
      if(n==1){
        cout<<-1<<endl;
      }
      else if(n==2){
        cout<<1<<" "<<1<<" "<<1<<endl;
      }
      else if(n==3){
        cout<<1<<" "<<2<<" "<<1<<endl;
      }
      else{
        long long reminder = (n)% MOD;
        if(n<=MOD){
          cout<<1<<" "<<n-1<<" "<<1<<endl;
        }
        else{
          if((n % MOD) ==0){
            cout<<MOD<<" "<< (n-MOD)/MOD<<" "<<MOD<<endl;
          }
          else{
            cout<<MOD<<" "<<(n/MOD)<<" "<<reminder<<endl;
          }
        }
      }
}
int main(){
    long long t;
    cin>>t; 
    while(t--){
        solve();
    }
    return 0;
}   