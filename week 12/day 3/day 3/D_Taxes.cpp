#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 +5;
typedef pair<int,int> pii;

bool is_prime(ll n){
    if(n==1) return true;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

void TEST_CASES()
{
       ll n;cin>>n;
       if(is_prime(n)){
        cout<<1<<endl;
        return;
       }
       if(n&1){
        if(is_prime(n-2)){
            cout<<2<<endl;
        }
        else{
            cout<<3<<endl;
        }
       }
       else{
        cout<<2<<endl;
       }
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t=1;
    //cin>>t;
    while(t--)
    {
        TEST_CASES();
    }
    return 0;
}