#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == ' ') {
            s.erase(s.begin() + i);
        }
    }
    vector<char> v;
    v.push_back(s[0]);
    for (int i = 1; i < s.size(); i++) {
        if (i == s.size() - 1) {
            while (v.size() != n-1) {
                v.push_back(s[s.size() - 1]);
            }
        }
        if (s[i] == s[i + 1]) {
            v.push_back(s[i]);
            i++;
        } else {
            v.push_back(s[i]);
            v.push_back(s[i + 1]);
            i++;
        }
    }
    vector<char>ans;
    for(int i=0;i<n;i++){
        char p =v[i];
        ans.push_back(p);
    }
    for (auto i : ans)cout<<i;
    cout<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
