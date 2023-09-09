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

pair<int,int> is_ok(int n){
    for(int i = n-2;i>=n/2;i--){
        if(__gcd(i,n-i)>1){
            return {i,n-i};
        }
    }
    return {-1,-1};
}

void TEST_CASES()
{
       int l,r;cin>>l>>r;
       for(int i=l;i<=r;i++){
        pair<int,int>ab;
        ab = is_ok(i);
        if(ab.first!=-1 && ab.second!=-1){
            cout<<ab.first<<" "<<ab.second<<endl;
            return;
        }
       }
       cout<<-1<<endl;

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