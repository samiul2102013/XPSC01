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
       int n,k;cin>>n>>k;
       vector<pair<int,int>>vp;
       for(int i=1;i<=n;i++){
        int p;cin>>p;
        vp.push_back(make_pair(p,i));
       }
       sort(vp.begin(),vp.end());
       int i=0,j=0;
       ll sum=0;
       while(j<n){
        sum+=vp[j].first;
        if(j<3){
            j++;
        }
        else{
            sum-=vp[i].first;
            i++;
            j++;
        }
        if(sum==k){
            vector<int>ans;
            ans.push_back(vp[i].second);
            ans.push_back(vp[i+1].second);
            ans.push_back(vp[i+2].second);
            sort(ans.begin(),ans.end());
            for(auto i:ans)cout<<i<<" ";
            cout<<endl;
            return;
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