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
         vector<int>t=v;
         sort(t.begin(),t.end());
         vector<int>rv=t;
         reverse(rv.begin(),rv.end());
         if(t==v){
            cout<<0<<endl;
            return ;
         }
         else if(rv==v){
            cout<<3<<endl;
            return;
         }
         if(n==3){
            int cnt=0;
            if(v[0]==1 || v[1]==2||v[2]==3){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
            return;
         }
         if(v[v.size()-1]==1&& v[0]==n){
            cout<<3<<endl;
            return;
            
         }
         if(v[v.size()-1]==n|| v[0]==1){
            cout<<1<<endl;
         }
         else{
            cout<<2<<endl;
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