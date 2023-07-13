#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        v[i] = k;
    }
    for (int i = 0; i < n; i++) {
        c = v;
        int j = 1;
        while (c.size() > 1) {
            if (c[j] > c[j + 1] && c[j] > c[j - 1]) {
                if (c[j + 1] > c[j - 1]) {
                    c.erase(c.begin() + j - 1);
                    c[j]++;
                } else {
                    c.erase(c.begin() + j + 1);
                    c[j]++;
                }
            } else if (c[j + 1] < c[j]) {
                c.erase(c.begin() + j + 1);
                c[j]++;
            } else if (c[j - 1] < c[j]) {
                c.erase(c.begin() + j - 1);
                c[j]++;
            } else {
                break;
            }
        }
        if (c.size() == 1) {
            cout << "YES" << endl;
            break;
        }
    }
    return 0;
}
