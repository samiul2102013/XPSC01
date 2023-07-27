#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int half = n / 2;
    if ((n & 1))
    {
        int o = 2;
        for (int i = 0; i < half; i++)
        {
            int t = n;
            while (t--)
            {
                cout << o << " ";
                o += 2;
            }
            cout << endl;
        }
        int p = 1;
        for (int i = half; i < n - 1; i++)
        {
            int t = n;
            while (t--)
            {
                cout << p << " ";
                p += 2;
            }
            cout << endl;
        }
        int ns = n * n;
        vector<int> v;
        while (o <= ns)
        {
            v.push_back(o);
            o += 2;
        }
        while (p <= ns)
        {
            v.push_back(p);
            p += 2;
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout<<endl;
    }
    else
    {
        int o = 2;
        for (int i = 0; i < half; i++)
        {
            int t = n;
            while (t--)
            {
                cout << o << " ";
                o += 2;
            }
            cout << endl;
        }
        o = 1;
        for (int i = half; i < n; i++)
        {
            int t = n;
            while (t--)
            {
                cout << o << " ";
                o += 2;
            }
            cout << endl;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}