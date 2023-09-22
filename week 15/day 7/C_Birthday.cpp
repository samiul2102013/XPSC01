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
         vector<int>left,right;
         debug(v);
         for(int i=0;i<n;i++){
            if(i%2==0){
                left.push_back(v[i]);
            }
            else{
                right.push_back(v[i]);
            }
         }
         debug(left);
         debug(right);
         reverse(right.begin(),right.end());
         for(auto i:left)cout<<i<<" ";
         for(auto i:right)cout<<i<<" ";
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