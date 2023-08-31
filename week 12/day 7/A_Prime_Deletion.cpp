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

bool is_prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

void TEST_CASES()
{
       string s;cin>>s;
      /*  for(int i=0;i<s.size()-1;i++){
        int a = (s[i]-'0')*10 + s[i+1]-'0';
        debug(a);
        for(int j=0;j<=s.size();j++){
             if(j==i || j==i+1){
                a= a*10 + s[j]-'0';
             }
             debug(a);
             cout<<endl;
        }
       } */
       for(int i=0;i<s.size();i++){
        for(int j=0;j<s.size();j++){
            if(i!=j){
                int a = (s[i]-'0')*10 + s[j]-'0';
                if(is_prime(a)){
                    cout<<a<<endl;
                    return;
                }
                //debug(a);
            }
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