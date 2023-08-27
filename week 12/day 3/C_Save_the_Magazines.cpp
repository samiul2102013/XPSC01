#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    s = '0' + s;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    long long ans = 0;
    int i = 0;
    while (i <= n) {
        int mn = a[i];
        int sm = a[i];
        int j = i + 1;
        while (j <= n && s[j] == '1') {
            mn = min(mn, a[j]);
            sm += a[j];
            j++;
        }
        ans += sm - mn;
        i = j;
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
