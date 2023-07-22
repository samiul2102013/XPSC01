#include<bits/stdc++.h>
using namespace std;
void solve(){
      long long n;   cin>>n;
      long long arr[n];
      for(long long i=0;i<n;i++) cin>>arr[i];

      long long cnt =0;
      for(long long i=0;i<31;i++){
        long long  k=0;
        for(long long  j=0;j<n;j++){
            long long  msb = 31 - __builtin_clz(arr[j]);
            if(msb==i) k++;
        }
        cnt += (k*(k-1))/2;
      }
      cout<<cnt<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}