#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    set<string> ss;
    ss.insert(s);
    vector<pair<int, int>> p;

    for (int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        p.push_back({a, b});
    }

    for (auto i : p) {
        string c = s;
        int a = i.first;
        int b = i.second;
        sort(c.begin() + a - 1, c.begin() + b);
        ss.insert(c);
    }
    
    cout<<ss.size()<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
