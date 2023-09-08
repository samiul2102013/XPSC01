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
       ll n,h;cin>>n>>h;
       vector<ll>v(n);
       for(auto &i:v)cin>>i;
       vector<ll>diff;
       for(ll i=0;i<n-1;i++){
        diff.push_back(v[i+1]-v[i]);
       }
       sort(diff.begin(),diff.end());
       debug(diff);
       ll cnt = n;
       for(ll i=0;i<diff.size();i++){
        if(diff[i]*cnt<h){
            h-=diff[i];
        }
        else if(diff[i]*cnt == h){
            cout<<h/cnt<<endl;
            return;
        }
        else{
            if(h%cnt==0){
                cout<<h/cnt<<endl;
                return;
            }
            ll ans = h/cnt +1;
            cout<<ans<<endl;
            return;
        }
        cnt--;
       }
       cout<<h<<endl;
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