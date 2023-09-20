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
         ll n,k,x;
            cin>>n>>k>>x;
            if(n<k || x<k-1)cout<<-1<<endl;
            else{
                ll a=k-1;
                ll ans=(a*(a+1))/2;
                ll baki=n-k;
                if(x!=k)ans+=baki*x;
                else ans+=baki*(k-1);
                cout<<ans<<endl;
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