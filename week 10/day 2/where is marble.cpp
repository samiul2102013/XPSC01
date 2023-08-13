#include <bits/stdc++.h>
using namespace std;
void solve()
{

    int cnt = 0;
    while (true)
    {
        int n, q;
        cin >> n >> q;
        if (n == 0 && q == 0)
        {
            return;
        }
        cnt++;
        cout << "CASE# " << cnt<<":"<< endl;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        while (q--)
        {
            int a;
            cin >> a;
            auto l = lower_bound(v.begin(), v.end(), a);
            int indx = l - v.begin();
            if (a == v[indx])
            {
                cout << a << " found at " << indx + 1 << endl;
            }
            else
            {
                cout << a << " not found" << endl;
            }
        }
        v.clear();
    }
}
int main()
{
    solve();
    return 0;
}