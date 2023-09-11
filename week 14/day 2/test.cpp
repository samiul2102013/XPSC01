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
    deque<int> d;
    d.push_back(2);
    d.push_back(3);
    d.push_back(9);
    d.push_back(78);
    d.push_back(7);
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
    d.erase(d.begin()+1, d.begin() + 2); // Erase the first two elements
    cout << endl;
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t = 1;
    //cin >> t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}
