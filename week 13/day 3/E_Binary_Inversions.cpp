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
       
       vector<int>v1=v;
       //1 check 
       
        for(int i=n-1;i>0;i--){
            if(v[i]==1){
                v[i]=0;
                break;
            }
        }
       debug(v);
       ll cnt=0;
       for(int i=n-1;i>=0;i--){
        pb.insert(v[i]);
        cnt+=pb.order_of_key(v[i]);
        //debug(v[i]);
       }
       debug(cnt);
       //0 check
       for(int i=0;i<n;i++){
            if(v1[i]==0){
                v1[i]=1;
                break;
            }
        }
       debug(v1);
       ll cnt1=0;
       pbds<int>pb1;
       for(int i=n-1;i>=0;i--){
        pb1.insert(v1[i]);
        cnt1+=pb.order_of_key(v[i]);
        //debug(v[i]);
       }
       debug(cnt1);
       ll mx = max(cnt,cnt1);
       cout<<mx<<endl;
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t=1;
    cin>>t;
    int i=1;
    while(t--)
    {
        debug(i);
        TEST_CASES();
        i++;
    }
    return 0;
}