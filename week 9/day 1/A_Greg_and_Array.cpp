#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    vector<vector<int>> oparation;
    for (int i = 0; i < m; i++){
        int l, r, d;
        cin >> l >> r >> d;
        oparation.push_back({l, r, d});
    }

    vector<pair<int, int>> query;
    for (int i = 0; i < k; i++){
        int a, b;
        cin >> a >> b;
        query.push_back(make_pair(a, b));
    }

    for (auto i : query){
        int f = i.first;
        int l = i.second;
        for (int j = f; j <= l; j++){
            for (int k = oparation[j - 1][0]; k <= oparation[j - 1][1]; k++){
                v[k - 1] = v[k - 1] + oparation[j - 1][2];
            }
        }
    }

    for (auto i : v){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    solve();
    return 0;
}
