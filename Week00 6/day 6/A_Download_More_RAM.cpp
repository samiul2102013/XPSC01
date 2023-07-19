#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        v1.push_back(p);
    }

    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        v2.push_back(p);
    }

    vector<pair<int, int>> pairs;

    for (int i = 0; i < n; i++) {
        auto a = make_pair(v1[i], v2[i]);
        pairs.push_back(a);
    }

    sort(pairs.begin(),pairs.end());

    int key = k;
    for(auto i:pairs){
        if(i.first<=key){
            key+=i.second;
        }
    }
    cout<<key<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
