#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    multiset<pair<int, int>> muls;

    for (int i = 1; i <= n; i++) {
        int p;
        cin >> p;
        muls.insert({p, i});
    }

    for (auto i : muls) {
        cout << i.first << " " << i.second << endl;
    }
    auto i = muls.end();
    i.first-=k;
    
}

int main() {
    solve();
    return 0;
}
