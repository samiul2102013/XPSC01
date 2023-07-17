#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t=4;
    int sum=0;
    int maxi = INT_MIN;
    while(t--){
        int k;
        cin>>k;
        sum+=k;
        maxi=max(maxi,k);
    }
    if((sum-maxi)<maxi){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}