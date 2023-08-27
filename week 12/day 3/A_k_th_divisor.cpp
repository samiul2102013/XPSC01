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
       ll n,k;cin>>n>>k;
       vector<ll>a;
       for(int i=1;i*i<=n;i++){
        if(n%i==0){
            a.push_back(i);
            if((n/i)!=i){
                a.push_back(n/i);
            }
        }
       }
       sort(a.begin(),a.end());
       if(k>a.size()){
        cout<<-1<<endl;
       }
       else{
        cout<<a[k-1]<<endl;
       }
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