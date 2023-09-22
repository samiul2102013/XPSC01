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
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;



void TEST_CASES()
{
          pbds<pair<int,int>> p;
    p.insert({3,1});
    p.insert({5,1});
    p.insert({5,2});
    p.insert({2,1});
    p.insert({1,1});
    for(auto i:p)cout<<i.first<<" ";
    cout<<endl;
    cout<<(*p.find_by_order(3)).first   ;//value at index 3
    cout<<endl<<p.order_of_key({4,0});//values are stricly less than 4
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