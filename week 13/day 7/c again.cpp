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
       vector<int>cnt(n+1);
       for(int i=0;i<n;i++){
        int k;cin>>k;
        cnt[k]++;
       }
       int mx = *max_element(cnt.begin(),cnt.end());
       int diff = n+1 - count(cnt.begin(),cnt.end(),0);
       debug(mx,diff);
       cout<<max(min(mx-1,diff),min(mx,diff-1))<<endl;
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