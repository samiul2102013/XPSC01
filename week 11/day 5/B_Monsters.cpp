#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.first > b.first;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v) {
        cin >> i;
        i %= k;
        if (!i) i = k;
    }
    vector<int> ord(n);
    iota(ord.begin(), ord.end(), 0);
    stable_sort(ord.begin(), ord.end(),[&](int i,int j){
        return v[i]>v[j];
    });
    for (auto i : ord) cout << i + 1 << " ";
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
