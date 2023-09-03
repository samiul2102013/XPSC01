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
       bool state = false;
       for(auto &i:v)cin>>i;
       sort(v.begin(),v.end());
       int ans=-1;
       int ager_dif=-1;
       for(int i=1;i<n;i++){
        if(v[i]==v[i-1]) continue;
        int d = v[i]-v[i-1];
        if(d&1) state = true;
        if(state){
            if(!(d&1)){
                cout<<"NO"<<endl;
                return;
            }
            else ans =d;
        }
        else{
            if(ager_dif!=d || ager_dif!=d/2){
                cout<<"NO"<<endl;
                return;
            }
            else{
                
            }
        }
        ager_dif =d;
        debug(state,ans,i);
       }
       cout<<ans;
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