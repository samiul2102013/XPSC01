#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    int ok = 1;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
    
    int maxi = *max_element(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        if (v[i] != v[0])
        {
            ok = 0;
            break;
        }
    }
    
    if (ok)
    {
        cout << -1 << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] == maxi)
        {
            if (i - 1 >= 0 && v[i] > v[i - 1])
            {
                cout << i + 1 << endl;
                return;
            }
            if (i + 1 < n && v[i + 1] < v[i])
            {
                cout << i + 1 << endl;
                return;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        solve();
    }

    return 0;
}
