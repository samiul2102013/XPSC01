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
    int x, y, n;
    cin >> x >> y >> n;
    int s = ((n) * (n - 1)) / 2;
    int d = n - 1;
    int a = x + s;
    if (a > y)
    {
        cout << -1 << endl;
    }
    else if (a == y)
    {
        cout << x << " ";
        int ans = x;
        while (n - 1)
        {
            ans += d;
            cout << ans << " ";
            d--;
            n--;
        }
        cout << endl;
    }
    else{
        cout<<x<<" ";
        int ans = y-x+x-s;
        while(n-1){
            ans+=d;
            cout<<ans<<" ";
            d--;
            n--;
        }
        cout<<endl;
    }
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