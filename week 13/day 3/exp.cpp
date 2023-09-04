#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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


template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;


void TEST_CASES()
{
       int n;cin>>n;
       pbds<int>pb;
       vector<int>v(n);
       for(auto &i:v)cin>>i;
       
       //1 check 
       if(v[0]==0){
        v[0]=1;
       }
       else{
        for(int i=n-1;i>0;i--){
            if(v[i]==1){
                v[i]=0;
                break;
            }
        }
       }
       debug(v);
       int cnt=0;
       for(int i=n-1;i>=0;i--){
        pb.insert(v[i]);
        cnt+=pb.order_of_key(v[i]);
        debug(v[i]);
       }
       cout<<cnt<<endl;
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