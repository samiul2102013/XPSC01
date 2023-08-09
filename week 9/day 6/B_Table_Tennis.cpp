#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    queue<int> powers;
    for (int i = 0; i < n; i++) {
        int power;
        cin >> power;
        powers.push(power);
    }

    int consecutiveWins = 0;
    int prevPower = -1;

    while (consecutiveWins < k) {
        int a = powers.front();
        powers.pop();
        int b = powers.front();

        if (a > b) {
            consecutiveWins++;
            powers.push(b);
            prevPower = a;
        } else {
            consecutiveWins = 1;
            powers.push(a);
            prevPower = b;
        }
    }

    cout << prevPower << endl;
}

int main() {
    solve();
    return 0;
}
