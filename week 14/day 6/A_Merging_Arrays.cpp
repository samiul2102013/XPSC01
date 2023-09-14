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
       int i=0,j=0;
       vector<int>a(n),b(k);
       for(auto &i:a)cin>>i;
       for(auto &i:b)cin>>i;

       vector<int>ans;

       while(i<a.size()&&j<b.size()){
        
        if(a[i]<b[j]){
            ans.push_back(a[i]);
            i++;
        }
        else{
            ans.push_back(b[j]);
            j++;
        }
        if(i>=a.size()){
            while(j<b.size()){
                ans.push_back(b[j]);
                j++;
            }
        }
        if(j>=b.size()){
            while(i<a.size()){
                ans.push_back(a[i]);
                i++;
            }
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
    //cin>>t;
    while(t--)
    {
        TEST_CASES();
    }
    return 0;
}