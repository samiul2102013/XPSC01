#include<bits/stdc++.h>
using namespace std;
void solve(){
    uint32_t ans = (1<<32)-1;
    long long n;  cin>>n;
    int a =100 ;
    int b=200;
    long long c=ans;
    long long d = (n^c);

    if(n==0){
        cout<<1<<" "<<4<<" "<<3<<" "<<2<<endl;
    }
    else if(n==ans){
        cout<<1<<" "<<4<<" "<<3<<" "<<2<<endl;
    }
    else{
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
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