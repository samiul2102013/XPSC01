#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    unordered_map<string, int> cur;
    for (int i = 0; i < n - 1; i++) {
        string t = s.substr(i, 2);
        if (cur.find(t) != cur.end()) {
            if (cur[t] < i - 1) {
                cout << "YES" << endl;
                return;
            }
        } else {
            cur[t] = i;
        }
    }
    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
