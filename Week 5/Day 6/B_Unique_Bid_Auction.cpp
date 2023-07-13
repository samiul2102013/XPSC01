#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> freq(n, 0);
    vector<int> v;
    vector<int> c;
    freq[n] = {0};
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        freq[k]++;
        v.push_back(k);
    }
    c = v;
    bool dukse = false;
    sort(v.begin(), v.end());
    int uniq;
    for (int i = 0; i < n; i++)
    {
        if (freq[v[i]] == 1)
        {
            uniq = v[i];
            dukse = true;
            break;
        }
    }
    if (dukse == false)
    {
        cout << -1 << endl;
    }
    else
    {
        auto it = find(c.begin(), c.end(), uniq);
        int index = distance(c.begin(), it);
        cout << index + 1 << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}