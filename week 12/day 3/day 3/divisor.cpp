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
    ll n, k;
    cin >> n >> k;
    vector<ll> divisor;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
            divisor.push_back(i);
        if (n / i != i)
            divisor.push_back(n / i);
    }
    sort(divisor.begin(), divisor.end());
    auto it = find(divisor.begin(), divisor.end(), divisor[k - 1]);
    if (it != divisor.end())
    {
        cout << *it << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t = 1;
    // cin>>t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}