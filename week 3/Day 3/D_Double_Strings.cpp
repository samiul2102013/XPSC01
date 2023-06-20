#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool isConcatenationPossible(const string& s, const unordered_set<string>& strings) {
    int n = s.size();
    for (int i = 1; i < n; i++) {
        string prefix = s.substr(0, i);
        string suffix = s.substr(i);
        if (strings.count(prefix) && strings.count(suffix)) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> strings(n);
        unordered_set<string> stringSet;

        for (int i = 0; i < n; i++) {
            cin >> strings[i];
            stringSet.insert(strings[i]);
        }

        string result;
        for (const string& s : strings) {
            if (isConcatenationPossible(s, stringSet)) {
                result += '1';
            } else {
                result += '0';
            }
        }

        cout << result << endl;
    }

    return 0;
}
