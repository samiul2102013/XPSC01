#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int d = k;
    int c=0;
    int ans =INT_MAX;
    for(int i=1;i<n;i++){
        cin>>k;
        if(abs(k-d)<ans){
            ans=abs(k-d);
        }
        d=k;
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}