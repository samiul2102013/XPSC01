#include <iostream>
using namespace std;

int smallest_prime_fac(int a) {
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            return i;
        }
    }
    return a;
}

void solve() {
    int x, y;
    cin >> x >> y;
    int ans = 0;
    if (x % 2 == 1) {
        ans = 1;
        for (int i = 2; i <= x; i++) {
            if (x % i == 0) {
                x += i;
                break;
            }
        }
    }
    cout << ans + (y - x + 1) / 2 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
