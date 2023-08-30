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
       int n,a,q;cin>>n>>a>>q;
       string s;cin>>s;
       int p=0,m=0;
       for(int i=0;i<s.size();i++){
        if(s[i]=='+'){
            p++;
        }
        else{
            m++;
        }
       }
       //cout<<"n "<<n<<"a "<<a<<"p "<<p<<"m "<<m<<endl;
       if(a>=n || a+p-m>=n){
        cout<<"YES"<<endl;
       }
       else if(a+p>=n){
        cout<<"MAYBE"<<endl;
       }
       else{
        cout<<"NO"<<endl;
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