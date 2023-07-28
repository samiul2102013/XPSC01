#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string u;
    cin >> u;
    vector<char> s;

    for (char c : u) {
        s.push_back(c);
        if (s.size() >= 3 && s[s.size() - 1] == s[s.size() - 2] && s[s.size() - 2] == s[s.size() - 3]) {
            s.pop_back();
            s.pop_back();
        }
    }

    for (char c : s) {
        cout << c;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
