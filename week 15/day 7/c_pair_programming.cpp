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
         int n,k,cnt;cin>>cnt>>n>>k;
         vector<int>v(n),vv(k),ans;
         for(int &i:v)cin>>i;
         for(int &i:vv)cin>>i;

         int i=0,j=0;
         while(i<n || j<k){
            if(v[i]<=cnt && i<n){
                    if(v[i]==0){
                    cnt++;
                }
                ans.push_back(v[i]);
                i++;
                }
            else if(vv[j]<=cnt && j<k){
                    if(vv[j]==0){
                    cnt++;
                }
                ans.push_back(vv[j]);
                j++;
            }
            else{
                cout<<-1<<endl;
                return;
            }
         }
         for(auto i:ans)cout<<i<<" ";
         cout<<endl;
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