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
const int N = 1e5 +5;
typedef pair<int,int> pii;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;



void TEST_CASES()
{
    /* pbds<pair<int,int>> p;
    p.insert({3,1});
    p.insert({5,1});
    p.insert({5,2});
    p.insert({2,1});
    p.insert({1,1});
    for(auto i:p)cout<<i.first<<" ";
    cout<<endl;
    cout<<(*p.find_by_order(3)).first   ;//value at index 3
    cout<<endl<<p.order_of_key({4,0});//values are stricly less than 4 */
    int cnt[N];
    int n;cin>>n;
    pbds<pair<int,int>>pd;
    for(int i=0;i<n;i++){
        int p;cin>>p;
        cnt[p]++;
        pd.insert({p,cnt[p]});
    }
    //for(auto i:pd)debug(i.first,i.second);
    int k;cin>>k;
    for(int i=0;i<k;i++){
        int l,r;cin>>l>>r;
        int a = pd.order_of_key({l,0});
        debug(a);
        int b = pd.order_of_key({r+1,0});
        debug(b);
        cout<<b-a<<" ";
    }
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