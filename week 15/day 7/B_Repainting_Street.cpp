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
const int N = 1e5 +5;
typedef pair<int,int> pii;



void TEST_CASES()
{
         int n,k;cin>>n>>k;
         vector<int>v(n);
         int mx=0;
         int d=0 ;
         int c=0;
         vector<int>cnt(N,0);
         for(int i=0;i<n;i++){
            cin>>v[i];
            cnt[v[i]]++;
            if(cnt[v[i]]>mx){
                d=v[i];
                mx=cnt[v[i]];
            }
         }
         debug(d);
         int i=0;
         while(i<n){
            if(v[i]!=d){
                c++;
                i+=k-1;
            }
            i++;
         }
         cout<<c<<endl;
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