#include<bits/stdc++.h>
using namespace std;
void solve(){
     int n;cin>>n;
     for(int i=1;i*i<n;i++){
        if(n%i==0){
            int ans = n/i;
            if(i!=ans){
                cout<<i<<" "<<ans<<" ";
            }
            else{
                cout<<i;
            }
        }
     } 
}
int main(){
    solve();
    return 0;
}