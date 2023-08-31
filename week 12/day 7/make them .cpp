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

       sort(v.begin(),v.end());
       int mx =0,mn=0,ans=0;
       for(int i=1;i<n;i++){
        if(v[i]==v[i-1]){
            continue;
        }
        int d = v[i]-v[i-1];
        if(d%2==1){
            mn=-1;
            mx=d;
        }
        if(mn = -1){
            mx =d;
            ans=d;
            for(int j=i+1;j<n;j++){
                int da = v[j]-v[j-1];
                if(da !=mx){
                    cout<<-1<<endl;
                    return;
                }
            }
        }
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