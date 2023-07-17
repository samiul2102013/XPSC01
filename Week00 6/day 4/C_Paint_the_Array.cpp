#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    long long maxi = LONG_MIN;
    vector<long long>v;
    for(int i=0;i<n;i++){
        long long k;
        cin>>k;
        v.push_back(k);
        maxi = max(k,maxi);
    }
    for(auto i:v)cout<<i<<" ";
    cout<<endl;
    long long c=0;
    for(long long i=2;i<maxi;i++){
        int p = n;
        c=0;
        while(p--){
            if((v[p]%i)==0){
                c++;
            }
            cout<<v[p]<<" "<<i<<" "<<c<<endl;
        }
        if(n/2==c){
            cout<<i<<endl;
            return;
        }
    }
    cout<<0<<endl;
    return;
}
int main(){
    solve();
    return 0;
}