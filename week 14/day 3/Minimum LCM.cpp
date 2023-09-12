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



void TEST_CASES()
{
       int n;cin>>n;
       if(!(n&1)){
        cout<<n/2<<" "<<n/2<<endl;
       }
       else{
        int l ,r,mx=0;
        int t=n-1;
        for(int i=1;i<=n/2;i++){
            int g = __gcd(i,t);
            debug(i,t,g);
            if(g>mx){
                l =i;
                r=t;
                mx = g;
            }
            t--;
        }
        cout<<l<<" "<<r<<endl;
       }
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t=1;
    cin>>t;
    while(t--)
    {
        TEST_CASES();
    }
    return 0;
}