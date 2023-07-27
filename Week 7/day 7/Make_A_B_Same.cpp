#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    string ans = "Yes";
    int ones = count(a.begin(), a.end(), 1);

    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            ans = "No";
            break;
        } else if (a[i] < b[i] && ones == 0) {
            ans = "No";
            break;
        }
    }

    if (a[0] != b[0] || a[n - 1] != b[n - 1]) {
        ans = "No";
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
