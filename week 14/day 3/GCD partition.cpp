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

       vector<int>ps;
       ps.push_back(v[0]);
       for(int i=1;i<v.size();i++){
        ps.push_back(ps[i-1]+v[i]);
       }
       debug(ps);
       int i=0;
       int mx =1;
       int last =ps[ps.size()-1];
       while(ps[i]<=last-ps[i]){
        int fast=ps[i];
        debug(fast,last);
        if(last%fast==0){
            mx=fast;
        }
        i++;
       }
       cout<<mx<<endl;
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