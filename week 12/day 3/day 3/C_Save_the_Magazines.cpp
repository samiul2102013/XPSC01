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
       vector<int>v(n),value(n);
       string s;cin>>s;
       for(int i=0;i<n;i++){
        v[i]=s[i]-'0';
       }
       for(auto i:v)cout<<i<<" ";
       cout<<endl;
       for(auto &i:value)cin>>i;
       ll ans=0;
       for(int i=0;i<n-1;i++){
        if(v[i+1]==1){
            if(value[i]>value[i+1]){
                ans+=value[i];
            }
            else{
                ans+=value[i+1];
            }
        }
       }
       cout<<ans<<endl;
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