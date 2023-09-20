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
         int n,k;cin>>n>>k;
         string s1,s2;cin>>s1>>s2;
         ll cnt =0;
         ll mn = LONG_MAX;
         for(int i=0;i<s1.size()-s2.size()+1;i++){
            cnt=0;
            for(int j=0;j<s2.size();j++){
                ll d =abs((s1[i+j]-'0')-(s2[j]-'0'));
                ll f = abs((s1[i+j]-'0')-10);
                ll g = abs((s1[i+j]-'0')-0);
                ll l = min(d,f);
                ll pp = min(l,g+1);
                debug(d,f,g,l,pp);
                cnt+=pp;
            }
            mn = min(mn,cnt);
            debug(mn);
            debug(cnt);
         }
         cout<<mn<<endl;

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