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
         vector<int>v(n);
         for(auto &i:v)cin>>i;
         sort(v.begin(),v.end());
         debug(v);
         int mid = n/2;
         ll mn = INT_MAX;
         
            ll pivot=0;
            for(int j=0;j<n;j++){
                pivot+=abs(v[mid]-v[j]);
            }
            mn = min(mn,pivot);
            debug(i,pivot);
         
         cout<<pivot<<endl;
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