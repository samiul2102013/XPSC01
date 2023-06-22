#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool canTransform(const vector<int>& a, const string& s) {
    vector<int> freq(51, 0); // Frequency array for numbers (1 to 50)

    // Count the frequency of each number in array a
    for (int num : a) {
        freq[num]++;
    }

    // Sort the array a in non-decreasing order
    vector<int> sortedA = a;
    sort(sortedA.begin(), sortedA.end());

    // Check if each character in s can be obtained from array a
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        int num = sortedA[i];

        // If the character does not match the number, return false
        if (c != 'a' + num - 1) {
            return false;
        }

        // If the number occurs earlier in the sorted array, return false
        for (int j = 0; j < i; j++) {
            if (sortedA[j] == num) {
                return false;
            }
        }

        // Decrement the frequency of the number
        freq[num]--;
    }

    // Check if all numbers have been used and transformed
    for (int num : freq) {
        if (num > 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        string s;
        cin >> s;

        if (canTransform(a, s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
