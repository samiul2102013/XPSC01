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
       int n,x;cin>>n>>x;
       vector<int>v;
       for(int i=0;i<n;i++){
        int k;cin>>k;
        v.push_back(k);
       }
       for(int i=0;i<v.size();i++){
        if(v[i]%x >0){
            break;
        }
        if(v[i]%x==0){
            int d = x;
            while(d){
                d--;
                v.push_back(v[i]/x);
            }
        }
       }
       ll sum=0;
       for(auto i:v){
        sum+=i;
       }
       cout<<sum<<endl;
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