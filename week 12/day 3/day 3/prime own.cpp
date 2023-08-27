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
       map<int,int>cnt;
       for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                cnt[i]++;
                n/=i;
            }
        }
       }
       if(n>1)cnt[n]++;
       for(auto i:cnt)cout<<i.first<<" "<<i.second<<endl;
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