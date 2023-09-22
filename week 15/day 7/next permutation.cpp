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
         string s;cin>>s;
         string t =s;
         sort(t.begin(),t.end());
         int cnt=1;
         int mx=0;
         for(int i=0;i<s.size();i++){
            if(t[i]==t[i+1]){
                cnt++;
                mx=max(cnt,mx);
            }
            else{
                cnt=1;
            }
         }
         debug(mx);
         int mul=1;
         for(int i=mx+1;i<=s.size();i++){
            mul*=i;
         }
         cout<<mul<<endl;
         do{
            for(char c:s){
                cout<<c;
            }
            cout<<endl;
         }while(next_permutation(s.begin(),s.end()));
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