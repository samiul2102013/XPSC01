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
const int N = 2e5 + 5;
typedef pair<int, int> pii;

void TEST_CASES()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    /* vector<int> pre;
    pre.push_back(v[0]);
    for (int i = 1; i < n; i++)
    {
        pre.push_back(pre[i - 1] + v[i]);
    }
    debug(pre); */
    ll s = accumulate(v.begin(), v.end(), 0ll);
    ll cur = 0;
    ll mx = 1;
    
    for (int i = 0; i < n-1; i++)
    {
        cur += v[i];
        s -= v[i];
        debug(s,cur);
        ll g = __gcd(s, cur);
        mx = max(mx,g);
    }
    cout<<mx<<endl;
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t = 1;
     cin >> t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}
