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

void TEST_CASES() {
    int n;
    cin >> n;
    vector<pair<int, int>> vp;
    for (int i = 1; i <= n; i++) {
        int k;
        cin >> k;
        vp.push_back(make_pair(k, i));
    }
    for (int i = 0; i < n; i++) {
        auto it = find_if(vp.begin() + i + 1, vp.end(), [&](const pair<int, int>& p) {
            return p.first == vp[i].first;
        });
        if (it != vp.end()) {
            cout << it->second << " ";
        }
    }
    cout << endl;
}

int32_t main() {
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t = 1;
    //cin >> t;
    while (t--) {
        TEST_CASES();
    }
    return 0;
}
