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
       int a,b,c; cin>>a>>b>>c;
       c+=c;
       int mn = min(a,b);
       if(a>b){
        int ans = a-mn;
        if(ans%c==0){
            cout<<ans/c<<endl;
        }
        else{
            cout<<ans/c + 1 <<endl;
        }
        debug("dukse",ans,a,b,c);
       }
       else if(a==b){
        cout<<0<<endl;
       }
       else{
        debug("b",a,b,c,mn);
        int ans =b-mn;
        if(ans%c==0){
            cout<<ans/c<<endl;
        }
        else{
            cout<<ans/c +1 <<endl;
        }
        debug("b",a,b,c,mn,ans);
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