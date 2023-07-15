#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n;
    cin>>n;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll k;
        cin>>k;
        v.push_back(k);
    }
    ll mini = INT_MAX;
    ll j,k;
    for(ll i=0;i<v.size()-1;i++){
        ll ans = abs(v[i]-v[i+1]);
        if(ans<mini){
            mini =ans;
        }
    }
    cout<<mini<<endl;
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}