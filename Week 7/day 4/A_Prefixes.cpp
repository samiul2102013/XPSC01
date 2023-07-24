#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt_a = 0, cnt_b = 0;
    int operations = 0;

    string modified_s = s;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (s[i] == 'a') {
                cnt_a++;
            } else {
                cnt_b++;
            }

            int diff = cnt_a - cnt_b;
            if (diff > 0) {
                modified_s[i] = 'b';
                cnt_b++;
                operations++;
            } else if (diff < 0) {
                modified_s[i] = 'a';
                cnt_a++;
                operations++;
            }
        } else {
            if (s[i] == 'a') {
                cnt_a++;
            } else {
                cnt_b++;
            }
        }
    }

    cout << operations << endl;
    cout << modified_s << endl;

    return 0;
}
