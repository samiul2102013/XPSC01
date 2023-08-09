#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    
    int ans = 0;
    for (char i : s) {
        if (i == 'B' && ans != 0) {
            ans--;
        } else {
            ans++;
        }
    }
    
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
