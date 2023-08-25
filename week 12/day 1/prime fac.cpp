//prime detection
#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n){
   /*  if(n==1){
        return false;
    }
    if(n==2){
        return true;
    } */
    if(n%2==0) return false;
    for(int i=3;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void solve(){
      int n=30;
      vector<int>prime;
      for(int i=2;i<n;i++){
        if(is_prime(i)){
            prime.push_back(i);
        }
      }
      for(auto i:prime)cout<<i<<" ";
}
int main(){
    solve();
    return 0;
}