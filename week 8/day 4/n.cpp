#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int cnt = 0;
    
    for (int i = 0; i < n - 1; i++) {
        string sub = s.substr(i, 2);
        if (s.find(sub, i + 1)s != string::npos) {
            cnt++;
        }
        if (cnt == 2) {
            cout << "YES" << endl;
            return;
        }
    }
    cout<<cnt;
    cout << "NO" << endl;
}

int main(){
    solve();
    return 0;
}
