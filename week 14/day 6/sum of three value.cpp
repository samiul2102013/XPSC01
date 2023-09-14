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
       ll n,x;
       cin>>n>>x;
       vector<pair<ll,ll>>vp;
       for(ll i=1;i<=n;i++){
        ll k;cin>>k;
        vp.push_back(make_pair(k,i));
       }
       sort(vp.begin(),vp.end());
       ll cnt=0,sum=0;
       ll i=0;
       debug(vp);
       while(i<n){
        debug(i);
        while(cnt<3){
            sum+=vp[i].first;
            i++;
            cnt++;
        }
        debug(sum,i);
        if(sum==x){
            debug(vp[i-3].second,vp[i-2].second,vp[i-1].second);
            vector<ll>ans;
            ans.push_back(vp[i-3].second);
            ans.push_back(vp[i-2].second);
            ans.push_back(vp[i-1].second);
            sort(ans.begin(),ans.end());
            for(auto i:ans)cout<<i<<" ";
            cout<<endl;
            return;
        }
        debug(vp[i-3].first);
        sum-=vp[i-3].first;
        debug(sum);
        cnt--;
       }
       cout<<"IMPOSSIBLE"<<endl;
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