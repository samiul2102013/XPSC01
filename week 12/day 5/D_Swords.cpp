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
       vector<int>v;
       int mx=0;
       for(int i=0;i<n;i++){
        int k;cin>>k;
        mx = max(mx,k);
        v.push_back(k);
       }
       vector<int>dif;
       for(int i=0;i<v.size();i++){
        int d = mx-v[i];
        if(d>0){
            dif.push_back(d);
        }
       }
       int gcd=dif[0];
       for(int i=1;i<dif.size();i++){
        gcd = __gcd(dif[i],gcd);
       }
       ll ans=0;
       for(int i=0;i<dif.size();i++){
        ans+=dif[i]/gcd;
       }
       cout<<ans<<" "<<gcd<<endl;
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