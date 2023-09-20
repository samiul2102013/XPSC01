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
         int a,b,c; cin>>a>>b>>c;
         int d = ceil(double(a)/b);
         int e = ceil(double(a)/c);
         debug(d);
         if(d>e){
            cout<<d-e-1<<endl;
         }
         else{
            cout<<-1<<endl;
         }
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