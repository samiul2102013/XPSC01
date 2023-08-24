#include <bits/stdc++.h>
using namespace std;

void solve() {
    int q;
    cin >> q;
    vector<int> a;
    int cnt = 0;

    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        int nw_cnt = cnt + (!a.empty() && a.back() > x);
        if (nw_cnt == 0 || (nw_cnt == 1 && x <= a[0])) {
            a.push_back(x);
            cnt = nw_cnt;
            cout << '1';
        } else {
            cout << '0';
        }
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
