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
       vector<pair<int,int>>vp;
       for(int i=0;i<n;i++){
        int k;cin>>k;
        vp.push_back(make_pair(k,i));
       }
       sort(vp.begin(),vp.end());
       reverse(vp.begin(),vp.end());
       debug(vp);
       vector<int>ans(n);
       for(int i=1;i<=n;i++){
        ans[vp[i-1].second]=i;
       }
       for(auto i:ans)cout<<i<<" ";
       cout<<endl;

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