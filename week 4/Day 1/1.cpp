#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    stack<string> s;
    for (int i = 0; i < n; i++) {
        string st;
        cin >> st;
        string ans = st.substr(st.size() - 2);
        s.push(ans);
    }
    unordered_set<string> us;
    while (!s.empty()) {
        string re = s.top();
        s.pop();
        if (us.count(re) == 0) {
            cout << re;
            us.insert(re);
        }
    }
    cout << endl;
    return 0;
}
