#include <iostream>
#include <vector>
using namespace std;

int GCD(int a, int b) {
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

void solve() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        v.push_back(k);
    }
    int result = v[0];
    for (int i = 1; i < n; i++) {
        result = GCD(result, v[i]);
    }
    cout << result << endl;
}

int main() {
    solve();
    return 0;
}
