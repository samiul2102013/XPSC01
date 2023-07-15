#include <iostream>
using namespace std;

const long long MOD = 1e9 + 7;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;
        long long ans = 1;

        while (n > 0 && k > 0) {
            ans = (ans * k) % MOD;
            n--;
            k--;
        }

        cout << ans << endl;
    }

    return 0;
}
